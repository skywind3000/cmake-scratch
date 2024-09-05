cmake_minimum_required(VERSION 3.5)

project(demo)

set(CMAKE_VERBOSE_MAKEFILE ON)

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

message("Compiler flags: ${COMPILER_FLAGS}")
message("CMAKE_BUILD_TYPE type: ${CMAKE_BUILD_TYPE}")
message("BUILD_TYPE type: ${BUILD_TYPE}")
message(STATUS "Compiler version: ${CMAKE_C_COMPILER_VERSION}")
message(STATUS "Compiler version: ${CMAKE_CXX_COMPILER_VERSION}")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /DXMODE=1")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /DXMODE=2")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /DXMODE=1")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /DXMODE=2")


