add_subdirectory(helper)
aux_source_directory(. SRC)
add_executable(proj1 ${SRC})
target_link_libraries(proj1 helper_static)