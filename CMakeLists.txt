cmake_minimum_required(VERSION 3.17)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
STRING(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_C_STANDARD 11)

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} include/math.h src/mach.c)
    target_compile_definitions(${name} PUBLIC DEBUG)
endforeach()
