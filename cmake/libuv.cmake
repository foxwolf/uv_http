
# libuv
ExternalProject_Add(libuv
        GIT_REPOSITORY https://github.com/libuv/libuv.git
        GIT_TAG v1.44.2
        SOURCE_DIR "${SDWL_CONTRIB_DIR}/libuv"
        BINARY_DIR "${SDWL_CONTRIB_DIR}/libuv"
        CONFIGURE_COMMAND "" 
        BUILD_COMMAND ""  
        INSTALL_COMMAND ""
        TEST_COMMAND ""
        )
