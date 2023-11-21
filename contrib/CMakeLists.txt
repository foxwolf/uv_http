function(cat IN_FILE OUT_FILE)
    file(READ ${IN_FILE} CONTENTS)
    file(APPEND ${OUT_FILE} "${CONTENTS}")
endfunction(cat IN_FILE OUT_FILE)

# set(CMAKE_C_FLAGS "-Werror -Werror=return-type -fPIC -O3 -Wformat=2 -Wno-format-nonliteral -Wno-format-truncation -Wno-format-y2k")

set(CONTRIB_DEPS_DOWNLOAD "${SDWL_CONTRIB_DIR}/deps-download/CMakeLists.txt")
set(CONTRIB_TMP_FILE "${CMAKE_BINARY_DIR}/deps_tmp_CMakeLists.txt.in")

set(CONTRIB_DEPS_HEADER "${SDWL_SUPPORT_DIR}/deps_header.cmake")
cat(${CONTRIB_DEPS_HEADER} ${CONTRIB_TMP_FILE})
cat("${SDWL_SUPPORT_DIR}/libuv.cmake" ${CONTRIB_TMP_FILE})

# download dependencies
configure_file(${CONTRIB_TMP_FILE} ${CONTRIB_DEPS_DOWNLOAD})
execute_process(COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
        WORKING_DIRECTORY "${SDWL_CONTRIB_DIR}/deps-download")
execute_process(COMMAND "${CMAKE_COMMAND}" --build .
        WORKING_DIRECTORY "${SDWL_CONTRIB_DIR}/deps-download")

message("~~~~ ${SDWL_CONTRIB_DIR}")
# add_subdirectory(libuv)
add_subdirectory(libuv EXCLUDE_FROM_ALL)

