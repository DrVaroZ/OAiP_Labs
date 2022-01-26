cmake_minimum_required(VERSION 3.20)
project(static_lib_5_1)

set(CMAKE_CXX_STANDARD 20)

add_library(test_static_library STATIC task1.cpp)

include_directories(includes/general)

target_link_libraries(test_static_library LINK_PUBLIC ${TEST_LIBRARY})

add_executable(static_lib_5_1 main.cpp)

target_link_libraries(static_lib_5_1 test_static_library)
