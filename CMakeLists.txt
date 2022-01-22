cmake_minimum_required(VERSION 3.5)

project(LDC)
set(SOURCES main.cpp)
add_executable(LDC ${SOURCES})

target_include_directories(LDC PRIVATE ${PROJECT_SOURCE_DIR}/include)
