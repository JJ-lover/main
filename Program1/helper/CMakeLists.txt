aux_source_directory(. SRC)
add_library(helper_static ${SRC})
target_include_directories(helper_static INTERFACE ./)