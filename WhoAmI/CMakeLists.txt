cmake_minimum_required(VERSION 3.10)
project( DisplayImage )

set(CMAKE_OSX_ARCHITECTURES "x86_64")
set(OpenCV_DIR /opt/opencv-arm64/lib/cmake/opencv4) 
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage main.cpp )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )