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


if (CMAKE_GENERATOR MATCHES "NMake")
	string(REPLACE "/MDd" "/MTd" CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")
	string(REPLACE "/MDd" "/MTd" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
	string(REPLACE "/MD" "/MT" CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")
	string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
endif()

set_property(TARGET demo PROPERTY MSVC_RUNTIME_LIBRARY MultiThreaded)

message(${CMAKE_CXX_FLAGS_DEBUG})
message(${CMAKE_CXX_FLAGS_RELEASE})
message(${CMAKE_CXX_FLAGS})


