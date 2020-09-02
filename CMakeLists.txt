cmake_minimum_required(VERSION 3.17)
project(FlowerpotConfiguration)

set(CMAKE_CXX_STANDARD 17)

#variables
set(LIB FlowerpotConfiguration)
set(SPECS FlowerpotConfigurationSpecs)

# move mocks to binary folder
configure_file(./mocks/empty-file.txt empty-file.txt COPYONLY)
configure_file(./mocks/one-line-file.txt one-line-file.txt COPYONLY)
configure_file(./mocks/key-value-file.txt key-value-file.txt COPYONLY)
configure_file(./mocks/keys-values-file.txt keys-values-file.txt COPYONLY)

add_library(${LIB} library.cpp library.h classes/File.cpp classes/File.h exceptions/FileNotFoundException.cpp exceptions/FileNotFoundException.h exceptions/Exception.cpp exceptions/Exception.h main.cpp classes/Parser.cpp classes/Parser.h exceptions/ParserException.cpp exceptions/ParserException.h classes/ConfigurationParsable.h classes/Serializer.cpp classes/Serializer.h classes/ConfigurationSerializable.h)

add_executable(${SPECS} main.cpp)

target_link_libraries(${SPECS} ${LIB})