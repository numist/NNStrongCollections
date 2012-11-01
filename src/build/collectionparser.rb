require 'fileutils'

class CollectionParser
  @@source = nil
  def self.source; @@source end
  def self.source= v; @@source = v end

  @collectionType = nil
  def collectionType; @collectionType end

  def self.types
    files = Dir[@@source+'/NNStrong*.h']
    files.delete_if {|x| x['+'] }
    files.collect {|x| /\/NNStrong(.*)\.h/.match(x)[1] }
  end

  def initialize(theType)
    @collectionType = theType
    if !CollectionParser.types.include? theType
      raise 'invalid type: '+theType
    end
    self
  end

#_class_, _lname_, _Uname_, _pluralSuffix_
  def writeHeader(classname, lname, uname, pluralSuffix, path)
    categories = Dir[@@source+'/NNStrong'+@collectionType+'*+*.h']
    mutableCategories = Dir[@@source+'/NNMutableStrong'+@collectionType+'*+*.h']

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

    result << "\n//\n// "+@@source+'/NNStrong'+@collectionType+'.h'+"\n//\n\n"
    result << IO.read(@@source+'/NNStrong'+@collectionType+'.h')+"\n"

    categories.each do |header|
      result << "\n//\n// "+header+"\n//\n\n"
      result << IO.read(header)
    end

    result << "\n//\n// "+@@source+'/NNMutableStrong'+@collectionType+'.h'+"\n//\n\n"
    result << IO.read(@@source+'/NNMutableStrong'+@collectionType+'.h')

    mutableCategories.each do |header|
      result << "\n//\n// "+header+"\n//\n\n"
      result << IO.read(header)
    end

    substitution = { '_class_' => classname, '_lname_' => lname, '_Uname_' => uname, '_pluralSuffix_' => pluralSuffix }
    ['_class_', '_lname_', '_Uname_', '_pluralSuffix_'].each{|token|
      result = result.gsub(/([#]{2})?#{token}([#]{2})?/, substitution[token])
    }

    open(path+'/NN'+uname+@collectionType+'.h', 'w') do |f|
      f << result
    end
  end

  def footer

  end

  def macroBlob
    
  end
end

# available types
# header blob for type
# impl blob for type
