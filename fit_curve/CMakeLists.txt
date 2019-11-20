# CMakeList.txt : CMake project for fit_curve, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (fit_curve "main.cpp" "fit_curve.cpp" "cv.cpp")

# TODO: Add tests and install targets if needed.
