cmake_minimum_required(VERSION 3.0)

project(uv_http)

set(SDWL_SUPPORT_DIR "${PROJECT_SOURCE_DIR}/cmake")
set(SDWL_CONTRIB_DIR "${PROJECT_SOURCE_DIR}/contrib")

message("~~~~~CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
# SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/bin)
add_subdirectory(contrib)
# add_subdirectory(example)
