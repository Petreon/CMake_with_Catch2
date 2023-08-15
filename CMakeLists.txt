cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD_REQUIRED ON) ## make c++ hard requirement
set(CMAKE_CXX_STANDARD 20) ## defalt C++ version standard for targets

set(PROJECT_HEADERS ./sources
                    ./headers)

set(PROJECT_SOURCES 
            ./sources/main.cpp
            ./sources/statslib.cpp
            ./sources/mathslib.cpp
            ./sources/mathslib.hpp
            ./headers/statslib.hpp)



        
#include(C:/Catch2/lib/cmake/Catch2/Catch.cmake)
##include(C:/Catch2/lib/cmake/Catch2/Catch2Config.cmake)
#include(C:/Catch2/lib/cmake/Catch2/Catch2ConfigVersion.cmake)
##include(C:/Catch2/lib/cmake/Catch2/Catch2Targets-debug.cmake)
#include(C:/Catch2/lib/cmake/Catch2/Catch2Targets.cmake)
#include(C:/Catch2/lib/cmake/Catch2/CatchAddTests.cmake)
#include(C:/Catch2/lib/cmake/Catch2/CatchShardTests.cmake)
#include(C:/Catch2/lib/cmake/Catch2/CatchShardTestsImpl.cmake)
#include(C:/Catch2/lib/cmake/Catch2/ParseAndAddCatchTests.cmake)


find_package(Catch2 3 REQUIRED)

if(NOT Catch2_FOUND)
        message(FATAL_ERROR "Could not find Catch2")
endif()

project(maths
        VERSION 0.0.1
        DESCRIPTION "testing with catch2 in a simple math library"
        LANGUAGES CXX)

#add_library(Catch2 STATIC ./catch2/catch_amalgamated.cpp)
#target_include_directories(catch2 PUBLIC ./catch2/)

#find_package(Catch2 REQUIRED)

add_executable(maths ${PROJECT_SOURCES})
target_include_directories(maths PUBLIC ${PROJECT_HEADERS})

add_executable(unit_tests 
                ./tests/math_add2number_test.cpp
                ./tests/math_multiply2number_test.cpp
                ./sources/mathslib.cpp)

target_link_libraries(unit_tests Catch2::Catch2WithMain)
target_include_directories(unit_tests PUBLIC ${PROJECT_HEADERS})

