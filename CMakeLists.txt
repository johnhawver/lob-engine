cmake_minimum_required(VERSION 3.20)
project(lob_engine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(lob INTERFACE)
target_include_directories(lob INTERFACE include)
target_compile_features(lob INTERFACE cxx_std_17)

include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.4
)
FetchContent_MakeAvailable(Catch2)

add_executable(lob_tests tests/test_smoke.cpp tests/test_types.cpp)
target_link_libraries(lob_tests PRIVATE lob Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(lob_tests)
