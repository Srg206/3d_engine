
cmake_minimum_required(VERSION 3.20)

project(3d_engine)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")

add_subdirectory(math)
add_subdirectory(tests)
