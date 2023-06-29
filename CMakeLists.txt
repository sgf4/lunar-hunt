
cmake_minimum_required(VERSION 3.14)

project(lunar-hunt)


file(GLOB_RECURSE LUNAR_SOURCES src/*.c src/*.h)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
link_libraries(${CURSES_LIBRARIES})


set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fsanitize=address")

if(WIN32)
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "-s -static")
endif()

add_executable(lunar-hunt ${LUNAR_SOURCES})
set_property(TARGET lunar-hunt PROPERTY C_STANDARD 17)

