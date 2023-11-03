cmake_minimum_required(VERSION 3.0.0)
project(Program1 VERSION 0.1.0 LANGUAGES C CXX)
aux_source_directory(./Program1/helper src_sub)
aux_source_directory(./Program1 src_cur)
add_executable(proj ${src_sub} ${src_cur})

include_directories(./Program1/helper)
