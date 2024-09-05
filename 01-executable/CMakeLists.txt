cmake_minimum_required(VERSION 3.13)

project(demo)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")

#----------------------------------------------------------------------
# source list
#----------------------------------------------------------------------
set(SRCS
	main.cpp
	utils.cpp
	)


#----------------------------------------------------------------------
# 
#----------------------------------------------------------------------
add_executable(demo ${SRCS})


