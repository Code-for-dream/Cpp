cmake_minimum_required(VERSION 3.15)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(VariableAndConstant DataType/1_VariableAndConstant.cpp)
add_executable(IntType DataType/2_IntType.cpp)
add_executable(FloatDoubleType DataType/3_FloatDoubleType.cpp)
add_executable(CharType DataType/4_CharType.cpp)
add_executable(TansType DataType/5_TransType.cpp)
add_executable(StrType DataType/6_StrType.cpp)
add_executable(BoolType DataType/7_BoolType.cpp)
add_executable(Input DataType/8_Input.cpp)