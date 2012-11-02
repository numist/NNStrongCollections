require 'fileutils'

class CollectionParser
  @@source = nil
  def self.source; @@source end
  def self.source= v; @@source = v end

  @collectionType = nil
  def collectionType; @collectionType end

  def self.types
    files = Dir[@@source+'/NN*.h']
    files.delete_if {|x| x['+']}
    files.collect {|x| /\/NN(.*)\.h/.match(x)[1]}
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

#import <Foundation/Foundation.h>

    EOS

    result << "\n//\n// "+@@source+'/NN'+@collectionType+'.h'+"\n//\n\n"
    result << IO.read(@@source+'/NN'+@collectionType+'.h')+"\n"

    categories.each do |header|
      result << "\n//\n// "+header+"\n//\n\n"
      result << IO.read(header)
    end

    substitution = { '_class_' => classname, '_lname_' => lname, '_Uname_' => uname, '_pluralSuffix_' => pluralSuffix }
    ['_class_', '_lname_', '_Uname_', '_pluralSuffix_'].each{|token|
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

#import "NN#{@collectionType.sub(/Strong/, uname)}.h"

    EOS

    result << "\n//\n// "+@@source+'/NN'+@collectionType+'.m'+"\n//\n\n"
    result << IO.read(@@source+'/NN'+@collectionType+'.m')+"\n"

    categories.each do |implementation|
      result << "\n//\n// "+implementation+"\n//\n\n"
      result << IO.read(implementation)
    end

    substitution = { '_class_' => classname, '_lname_' => lname, '_Uname_' => uname, '_pluralSuffix_' => pluralSuffix }
    ['_class_', '_lname_', '_Uname_', '_pluralSuffix_'].each{|token|
      result = result.gsub(/([#]{2})?#{token}([#]{2})?/, substitution[token])
    }

    filename = path+'/NN'+@collectionType.sub(/Strong/, uname)+'.m'
    open(filename, 'w') do |f|
      f << result
    end
    filename
  end

  def macroBlob
    result = IO.read(@@source+'/NN'+@collectionType+'.h')
    Dir[@@source+'/NN'+@collectionType+'*+*.h'].each do |header|
      result << IO.read(header)
    end
    result << IO.read(@@source+'/NN'+@collectionType+'.m')
    Dir[@@source+'/NN'+@collectionType+'*+*.m'].each do |impl|
      result << IO.read(impl)
    end

    result = result.gsub(/[\s]*\/\/.*$/, '').gsub(/\/\*[\*]*.*?\*\//m, '').gsub(/[\s]+/m, ' ')
  end
end
