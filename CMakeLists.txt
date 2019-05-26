cmake_minimum_required(VERSION 3.14)
project(chipsets)

set(CMAKE_CXX_STANDARD 11)

add_executable(chipsets main.cpp ByteCodeInterpreter.cpp ByteCodeInterpreter.h InterpreterFlagRegister.cpp InterpreterFlagRegister.h ByteCodeBlob.cpp ByteCodeBlob.h)