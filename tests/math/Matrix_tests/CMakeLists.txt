add_executable(Matrix_test Matrix_test.cpp)



target_link_libraries(Matrix_test Matrix)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT test_complex)


