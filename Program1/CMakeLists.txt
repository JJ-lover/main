add_subdirectory(helper)
include_directories(lib)
add_executable(proj1 main.cpp)
target_link_libraries(proj1 D:/git/main/Program1/lib/libhelper_static.a)