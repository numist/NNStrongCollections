require 'fileutils'

require 'src/build/collectionparser'
CollectionParser.source = 'src'

# What does rake/clean clean/clobber by default?
require 'rake/clean'
CLEAN.include('**/*.temp')
CLEAN.include('build')
CLOBBER.include('src/doxygen.config')
CLOBBER.include('**/.DS_Store')

IntermediateDirectory = 'build/intermediate'
BuildIntermediateDirectory = IntermediateDirectory + '/macro'
TestIntermediateDirectory = IntermediateDirectory + '/test'
DocumentationIntermediateDirectory = IntermediateDirectory + '/docs'
LintIntermediateDirectory = IntermediateDirectory + '/lint'

# Actual compilation is only done for tests and lint—this project delivers source code.
#   Actually, this project delivers macros.
CC  = 'clang'
LD  = CC
CFLAGS = [
  '-std=c99',     # why isn't this the default?
  '-fobjc-arc',   # TODO: support manual memory management
  '-O0',
  '-g',
  '-Werror',      # required
  '-pedantic',    # required
  '-Wno-sentinel' # required due to too many people (including me!) being clever at compile-time :V
].join(' ')
LIBS = [
  '-framework Foundation'
].join(' ')

task :default => [:all]

task :install => [:all] do
  ## Do not install docset for a class that only exists in OUR BRAINS
  # puts "installing docset"
  # system("make -C build/NNStrongCollections.docset/html install > /dev/null")
end

task :all => [:build, :test, :docs] do
  FileUtils.rm_rf(IntermediateDirectory)
end

task :docs do
  puts "[docs]"
  # check that doxygen is in the path or something
  unless system('which doxygen &> /dev/null')
    raise "doxygen could not be found"
  end

  FileUtils.mkdir_p(DocumentationIntermediateDirectory)
  sh "cp src/NN*.h "+DocumentationIntermediateDirectory

  # doxygen requires a default configuration file
  if !File.exists?('src/doxygen.config')
    puts "generating default doxygen.config"
    sh 'doxygen -g src/doxygen.config > /dev/null'
  end

  puts "generating docset"
  config = IO.read('src/doxygen.config')
  config << <<-EOS
    INPUT = .
    OUTPUT_DIRECTORY = NNStrongCollections.docset
    GENERATE_DOCSET        = YES
    DOCSET_BUNDLE_ID       = net.numist.NNStrongCollections
  EOS

  configFile = DocumentationIntermediateDirectory+'/doxygen.config'
  open(configFile, 'w') do |f|
    f << config
  end

  cd DocumentationIntermediateDirectory do
    sh "doxygen doxygen.config &> doxygen.log"
  end
  FileUtils.cp_r(DocumentationIntermediateDirectory+"/NNStrongCollections.docset", "build/", :verbose => true)
end

task :test => [:build] do
  # TBD, I'm doing some ad-hoc stuff with what's in tests/ocunit
end

task :build => [:lint] do
  puts "[build]"
  FileUtils.mkdir_p(BuildIntermediateDirectory)

  header = CollectionParser.fileHeader+"\n#import <Foundation/Foundation.h>\n"
  interfaces = ""
  
  implementation = CollectionParser.fileHeader+"\n#import <Foundation/Foundation.h>\n#include <stdarg.h>\n"
  implementations = ""

  CollectionParser.types.each do |x|
    # header
    interfaces += CollectionParser.new(x).macroHeader
  end

  implementations = interfaces
  CollectionParser.types.each do |x|
    #implementation
    implementations += CollectionParser.new(x).macroImplementation
  end

  template = "\n"+IO.read('src/template.h')
  header += template.gsub(/__NNMacroDefinition__/, interfaces)
  implementation += template.gsub(/__NNMacroDefinition__/, implementations)

  filename = "build/NNStrongCollections.h"
  puts "generating #{filename}"
  open(filename, 'w') do |f|
    f << header
  end

  filename = "build/NNStrongCollections+Implementation.h"
  puts "generating #{filename}"
  open(filename, 'w') do |f|
    f << implementation
  end

  # user creates a .m, includes +Implementation and then their collections header and viola, implementations.

end

task :lint do
  puts "[lint]"
  FileUtils.mkdir_p(LintIntermediateDirectory)

  classname = "NSString"
  lname = "string"
  uname = "String"
  plural = "s"

  CollectionParser.types.each do |x|
    parser = CollectionParser.new(x)
    parser.writeHeader(classname, lname, uname, plural, LintIntermediateDirectory)
    impl = parser.writeImplementation(classname, lname, uname, plural, LintIntermediateDirectory)

    # build
    sh "#{CC} -I#{LintIntermediateDirectory} #{LIBS} #{CFLAGS} -dynamiclib -o #{impl.ext(".a")} #{impl}"

    # analyze
    sh "#{CC} -I#{LintIntermediateDirectory} --analyze #{CFLAGS} -o #{impl.ext(".a")} #{impl}"
  end
end