aux_source_directory(src UV_SRC)

add_executable(uvHttp ${UV_SRC})

target_link_libraries(
    uvHttp
    PUBLIC uv_a
)

