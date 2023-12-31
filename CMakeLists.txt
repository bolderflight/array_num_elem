cmake_minimum_required(VERSION 3.14)
# Project information
project(ArrayNumElem
  VERSION 1.0.0
  DESCRIPTION "Number of array elements."
  LANGUAGES CXX
)
# Add the library target
add_library(array_num_elem INTERFACE)
# Setup include directories 
target_include_directories(array_num_elem INTERFACE src/)

# Example and unit testing if this project is built separately
if (PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
  # Add the example target
  add_executable(array_num_elem_example examples/cmake/array_num_elem_ex.cc)
  # Add the includes
  target_include_directories(array_num_elem_example PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )
  # Link libraries to the example target
  target_link_libraries(array_num_elem_example
    PRIVATE 
      array_num_elem
  )
  # Fetch google test
  include(FetchContent)
  FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
  )
  FetchContent_MakeAvailable(googletest)
  enable_testing()
  include(GoogleTest)
  # Add the test target
  add_executable(array_num_elem_test tests/array_num_elem_test.cc)
  # Add the includes
  target_include_directories(array_num_elem_test PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )
  # Link libraries to the test target
  target_link_libraries(array_num_elem_test
    PRIVATE 
      array_num_elem
      gtest_main 
      gtest
      gmock
  )
  # Discover unit tests
  gtest_discover_tests(array_num_elem_test)
endif()
