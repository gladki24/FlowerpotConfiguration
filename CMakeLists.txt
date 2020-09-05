cmake_minimum_required(VERSION 3.17)
project(FlowerpotConfiguration)

set(CMAKE_CXX_STANDARD 17)

#variables
set(LIB FlowerpotConfiguration)
set(SPECS FlowerpotConfigurationSpecs)

add_library(${LIB} library.h classes/File.cpp classes/File.h exceptions/FileNotFoundException.cpp exceptions/FileNotFoundException.h exceptions/Exception.cpp exceptions/Exception.h classes/Parser.cpp classes/Parser.h exceptions/ParserException.cpp exceptions/ParserException.h classes/Serializer.cpp classes/Serializer.h classes/ConfigurationSerializable.h classes/Configuration.cpp classes/Configuration.h exceptions/FileCreatingException.cpp exceptions/FileCreatingException.h)