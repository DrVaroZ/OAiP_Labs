cmake_minimum_required(VERSION 3.20)
project(shared_lib_5_2)

set(CMAKE_CXX_STANDARD 20)

add_library(test_shared_library SHARED task2.cpp)

include_directories(includes/general)

target_link_libraries(test_shared_library LINK_PUBLIC ${TEST_LIBRARY})

add_executable(shared_lib_5_2 main.cpp task2.cpp)

target_link_libraries(shared_lib_5_2 test_shared_library)
