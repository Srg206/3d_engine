add_library(Matrix Matrix.cpp Matrix.hpp)
set_property(TARGET Matrix PROPERTY CXX_STANDARD 20)
##
install(TARGETS Matrix)