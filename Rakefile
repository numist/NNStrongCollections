require 'fileutils'

require 'src/build/collectionparser'
CollectionParser.source = 'src'

# What does rake/clean clean/clobber by default?
require 'rake/clean'
CLEAN.include('**/*.temp')
CLEAN.include('build')
CLOBBER.include('src/doxygen.config')

IntermediateDirectory = 'build/intermediate'
DocumentationIntermediateDirectory = IntermediateDirectory + '/doc'

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
    system('doxygen -g src/doxygen.config')
  end

  puts "configuring doxygen"
  config = IO.read('src/doxygen.config')
  config << <<-EOS
    INPUT = #{DocumentationIntermediateDirectory}
    OUTPUT_DIRECTORY = build/NNStrongCollections.docset
    GENERATE_DOCSET        = YES
    DOCSET_BUNDLE_ID       = net.numist.NNStrongCollections
  EOS

  configFile = DocumentationIntermediateDirectory+'/doxygen.config'
  open(configFile, 'w') do |f|
    f << config
  end

  puts "generating documentation"
  system("doxygen #{configFile} > /dev/null")
end

task :test => [:build] do
  FileUtils.mkdir_p(IntermediateDirectory)
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
  FileUtils.mkdir_p(IntermediateDirectory)
  # strip comments from all .m and .h -- for now only worry about comments matching trim ^//… and block comments matching trim /* … */.
  # combine same-type files starting with NN — NNStrongArray NNMutableStrongArray into string blob
  # strip newlines
  # create NNStrongCollections.h by injecting macros.h into template.h and replacing _NNMacroDefinitionForType with Type's blob (Type eg: StrongArray)
end

task :lint do
  FileUtils.mkdir_p(IntermediateDirectory)

  classname = "NSString"
  lname = "string"
  uname = "String"
  plural = "s"

  CollectionParser.types.each do |x|
    parser = CollectionParser.new(x)
    header = parser.writeHeader(classname, lname, uname, plural, IntermediateDirectory)
    impl = parser.writeImplementation(classname, lname, uname, plural, IntermediateDirectory)

    # build
    sh "#{CC} -I#{IntermediateDirectory} #{LIBS} #{CFLAGS} -dynamiclib -o #{impl}.o #{impl}"

    # analyze
    sh "#{CC} -I#{IntermediateDirectory} --analyze #{CFLAGS} -dynamiclib -o #{impl}.o #{impl}"
  end

  # build one set of test files via string replacement
    # -TODO: ruby lib to build working test headers and impls via string replacement
  # cpp lint test files
end