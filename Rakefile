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

CC  = 'clang'
LD  = CC
CFLAGS = [
  '-std=c99',
  '-fobjc-arc',
  '-O0',
  '-g',
  '-Werror',
  '-pedantic'
].join(' ')
LIBS = ['-framework Foundation'].join(' ')

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

  puts "generating headers"
  CollectionParser.types.each {|x|
    CollectionParser.new(x).writeHeader("NNWidget", "widget", "Widget", "s", DocumentationIntermediateDirectory)
  }

  # doxygen requires a default configuration file
  if !File.exists?('src/doxygen.config')
    puts "generating default doxygen configuration"
    sh 'doxygen -g src/doxygen.config > /dev/null'
  end

  puts "configuring doxygen"
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

  puts "generating documentation"

  cd DocumentationIntermediateDirectory do
    sh "doxygen doxygen.config &> doxygen.log"
  end
  FileUtils.cp_r(DocumentationIntermediateDirectory+"/NNStrongCollections.docset", "build/", :verbose => true)
end

task :test => [:build] do
  puts "[test]"
  FileUtils.mkdir_p(TestIntermediateDirectory)

  # Start with basic testing of the manufactured files
  classname = "NSString"
  lname = "string"
  uname = "String"
  plural = "s"
  CollectionParser.types.each do |x|
    parser = CollectionParser.new(x)
    header = parser.writeHeader(classname, lname, uname, plural, TestIntermediateDirectory)
    impl = parser.writeImplementation(classname, lname, uname, plural, TestIntermediateDirectory)

    # ruby "src/build/tests.rb"?
  end

  # ruby "test/unittest.rb"
  # build working test files for each collection type via string replacement
    # -TODO: ruby lib to build working test headers and impls via string replacement
  # build binary
  # build tests testing string replacement
  # run tests testing string replacement
  # build tests testing macro usage
  # run tests testing macro usage
end

task :build => [:lint] do
  puts "[build]"
  FileUtils.mkdir_p(BuildIntermediateDirectory)
  # strip comments from all .m and .h -- for now only worry about comments matching trim ^//… and block comments matching trim /* … */.
  # combine same-type files starting with NN — NNStrongArray NNMutableStrongArray into string blob
  # strip newlines
  # create NNStrongCollections.h by injecting macros.h into template.h and replacing _NNMacroDefinitionForType with Type's blob (Type eg: StrongArray)
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
    header = parser.writeHeader(classname, lname, uname, plural, LintIntermediateDirectory)
    impl = parser.writeImplementation(classname, lname, uname, plural, LintIntermediateDirectory)

    # build
    sh "#{CC} -I#{LintIntermediateDirectory} #{LIBS} #{CFLAGS} -dynamiclib -o #{impl}.o #{impl}"

    # analyze
    sh "#{CC} -I#{LintIntermediateDirectory} --analyze #{CFLAGS} -o #{impl}.o #{impl}"
  end

  # build one set of test files via string replacement
    # -TODO: ruby lib to build working test headers and impls via string replacement
  # cpp lint test files
end