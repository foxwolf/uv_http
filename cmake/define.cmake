cmake_minimum_required(VERSION 3.10.0)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build/bin)

option(
    BUILD_WITH_UV
    "If build with libuv"
    ON
)

# disable all assert
#IF ((${DISABLE_ASSERT} MATCHES "true") OR (${DISABLE_ASSERTS} MATCHES "true"))
ADD_DEFINITIONS(-DDISABLE_ASSERT)
#MESSAGE(STATUS "Disable all asserts")
#ENDIF()