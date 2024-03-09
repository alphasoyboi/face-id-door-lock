cmake_minimum_required(VERSION 3.22)
project(FIDDL)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        src/main.cc)
add_executable(${PROJECT_NAME} ${SOURCES})

# add dlib library (https://github.com/davisking/dlib/blob/master/examples/CMakeLists.txt)
add_subdirectory(vendor/dlib dlib_build)
target_link_libraries(${PROJECT_NAME} dlib::dlib)

# Add the dlib library
# Check the platform
#[[if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message("Compiling on Linux")
    # Add Linux-specific configurations or options
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message("Compiling on Windows")
    # Add Windows-specific configurations or options
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    message("Compiling on macOS")
    set(dlib_DIR /opt/homebrew/Cellar/dlib/19.24.2)
    target_link_libraries(${PROJECT_NAME} ${dlib_DIR}/lib/libdlib.dylib)
else()
    message("Unknown platform: ${CMAKE_SYSTEM_NAME}")
endif()
target_include_directories(${PROJECT_NAME} PUBLIC ${dlib_DIR}/include)
]]

# Add OpenCV
#find_package(OpenCV REQUIRED)

#include_directories(${OpenCV_INCLUDE_DIRS})
#target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

#add_definitions(-DHAAR_CASCADE_PATH="${OpenCV_INSTALL_PATH}/share/opencv4/haarcascades/")
