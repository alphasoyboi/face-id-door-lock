cmake_minimum_required(VERSION 3.22)
project(FIDDL)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        src/main.cc)
add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(vendor/dlib/)
target_link_libraries(${PROJECT_NAME} dlib)