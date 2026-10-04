cmake_minimum_required(VERSION 4.0)

project(
	foundryengine
	LANGUAGES CXX C
)

include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)

FetchContent_Declare(
	glfw3
	GIT_REPOSITORY https://github.com/glfw/glfw.git
	GIT_TAG 3.4
	GIT_SHALLOW TRUE
	GIT_PROGRESS TRUE
)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(glfw3)

add_library(foundryengine STATIC
	src/engine.cpp
	)

set_target_properties(foundryengine PROPERTIES CXX_STANDARD 20)

add_executable(main src/main.cpp
	src/engine.cpp)

set_target_properties(main PROPERTIES CXX_STANDARD 20)
target_include_directories(foundryengine PUBLIC src)
