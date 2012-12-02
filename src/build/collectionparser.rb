require 'fileutils'

class CollectionParser
  @@source = nil
  def self.source; @@source end
  def self.source= v; @@source = v end

  # TODO: support manual memory management
  @@usingArc = true
  def autorelease; @@usingArc ? "self" : "autorelease" end
  def self.usingArc= v; @@usingArc = v end

  @collectionType = nil
  def collectionType; @collectionType end

  def self.types
    files = Dir[@@source+'/NN*.h']
    files.delete_if {|x| x['+']}
    files.collect {|x| /\/NN(.*)\.h/.match(x)[1]}
  end

  def self.fileHeader
    result = <<-EOS
//
//  Generated on #{Time.new}.
//  Contents copyright © 2012 Scott Perry (http://numist.net)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
EOS
  end

  def initialize(theType)
    @collectionType = theType
    if !CollectionParser.types.include? theType
      raise 'invalid type: '+theType
    end
    self
  end

  def writeHeader(classname, lname, uname, pluralSuffix, path)
    categories = Dir[@@source+'/NN'+@collectionType+'*+*.h']

    result = CollectionParser.fileHeader + "\n#import <Foundation/Foundation.h>\n\n"

    result << "\n//\n// "+@@source+'/NN'+@collectionType+'.h'+"\n//\n\n"
    result << IO.read(@@source+'/NN'+@collectionType+'.h')+"\n"

    categories.each do |header|
      result << "\n//\n// "+header+"\n//\n\n"
      result << IO.read(header)
    end

    substitution = { 'NSWidget' => classname, 'widget' => lname, 'Widget' => uname, 's' => pluralSuffix }
    ['NSWidget', 'widget', 'Widget', 's'].each{|token|
      result = result.gsub(/([#]{2})?#{token}([#]{2})?/, substitution[token])
    }

    filename = path+'/NN'+@collectionType.sub(/Strong/, uname)+'.h'
    open(filename, 'w') do |f|
      f << result
    end
    filename
  end

  def writeImplementation(classname, lname, uname, pluralSuffix, path)
    categories = Dir[@@source+'/NN'+@collectionType+'*+*.m']

    result = CollectionParser.fileHeader + "\n#import \"NN"+@collectionType.sub(/Strong/, uname)+".h\"\n\n"

    result << "\n//\n// "+@@source+'/NN'+@collectionType+'.m'+"\n//\n\n"
    result << IO.read(@@source+'/NN'+@collectionType+'.m')+"\n"

    categories.each do |implementation|
      result << "\n//\n// "+implementation+"\n//\n\n"
      result << IO.read(implementation)
    end

    substitution = { 'NSWidget' => classname, 'widget' => lname, 'Widget' => uname, 's' => pluralSuffix }
    ['NSWidget', 'widget', 'Widget', 's'].each{|token|
      result = result.gsub(/([#]{2})?#{token}([#]{2})?/, substitution[token])
    }

    result = result.gsub(/_AUTORELEASE_/, self.autorelease)

    filename = path+'/NN'+@collectionType.sub(/Strong/, uname)+'.m'
    open(filename, 'w') do |f|
      f << result
    end
    filename
  end

  def macroHeader
    result = IO.read(@@source+'/NN'+@collectionType+'.h')
    Dir[@@source+'/NN'+@collectionType+'*+*.h'].each do |header|
      result << IO.read(header)
    end
    result = self.setupMacroArgs(result)
    result = result.gsub(/[\s]*\/\/.*$/, '').gsub(/[\s]*\/\*.*?\*\//m, '').gsub(/[\n]+/, " \\\n")
  end

  def macroImplementation
    result = IO.read(@@source+'/NN'+@collectionType+'.m')
    Dir[@@source+'/NN'+@collectionType+'*+*.m'].each do |impl|
      result << IO.read(impl)
    end
    result = self.setupMacroArgs(result)
    result = result.gsub(/^#.*/, '')

    # result = result.gsub(/[\s]*\/\/.*$/, '').gsub(/\/\*[\*]*.*?\*\//m, '').gsub(/[\s]+/m, " ")
    result = result.gsub(/[\s]*\/\/.*$/, '').gsub(/\/\*[\*]*.*?\*\//m, '').gsub(/[\n]+/m, " \\\n")
  end

  def setupMacroArgs(string)
    [
      ["Widgets", "_Uname_##_pluralSuffix_"],
      ["widgets", "_lname_##_pluralSuffix_"],
      ["NSWidget", "_class_"],
      ["Widget", "_Uname_"],
      ["widget", "_lname_"]
    ].each do |pair|
      string = string.gsub(/([A-Za-z0-9])#{pair.at(0)}([A-Za-z0-9])/, '\1##'+pair.at(1)+'##\2')
      string = string.gsub(/([A-Za-z0-9])#{pair.at(0)}/, '\1##'+pair.at(1))
      string = string.gsub(/#{pair.at(0)}([A-Za-z0-9])/, pair.at(1)+'##\1')
      string = string.gsub(/#{pair.at(0)}/, pair.at(1))
    end
    string
  end
end
