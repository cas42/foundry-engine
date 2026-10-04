cmake_minimum_required(VERSION 4.0)

project(
	foundryengine
	LANGUAGES CXX C
)

add_library(foundryengine STATIC
	src/engine.cpp
	)

set_target_properties(foundryengine PROPERTIES CXX_STANDARD 20)

add_executable(main src/main.cpp
	src/engine.cpp)
set_target_properties(main PROPERTIES CXX_STANDARD 20)
target_include_directories(foundryengine PUBLIC src)
