require 'fileutils'

# What does rake/clean clean/clobber by default?
require 'rake/clean'
CLEAN.include('**/*.temp')
CLEAN.include('build')
# CLOBBER.include('passwd')

IntermediateDirectory = 'build/intermediates'

task :default => [:all]

task :all => [:build, :test, :docs] do
  FileUtils.rm_rf(IntermediateDirectory)
end

task :docs do
  FileUtils.mkdir_p(IntermediateDirectory)
  # build test headers for each collection type via string replacement
    # -TODO: ruby lib to build working test headers and impls via string replacement
  # build docset ( http://developer.apple.com/library/ios/#featuredarticles/DoxygenXcode/_index.html )
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
  # build one set of test files via string replacement
    # -TODO: ruby lib to build working test headers and impls via string replacement
  # cpp lint test files
end