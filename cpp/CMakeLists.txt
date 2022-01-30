cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(dsa VERSION 0.1.0)

# Include dir
include_directories(/usr/local/include)

# Src
AUX_SOURCE_DIRECTORY(src SRC_FILES)

# Headers
set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include/dsa_bits")

# Source files
set(SOURCE_FILES
    ${PROJECT_INCLUDE_DIR}/test.hpp
    ${PROJECT_INCLUDE_DIR}/week1.hpp
    ${PROJECT_INCLUDE_DIR}/week2.hpp
    ${PROJECT_INCLUDE_DIR}/week3.hpp
    
    ${PROJECT_SOURCE_DIR}/test.cpp
    ${PROJECT_SOURCE_DIR}/week1.cpp
    ${PROJECT_SOURCE_DIR}/week2.cpp
    ${PROJECT_SOURCE_DIR}/week3.cpp
)

# Set up such that XCode organizes the files correctly
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

# Add library
add_library(dsa SHARED ${SOURCE_FILES})

# Include directories
target_include_directories(dsa PRIVATE include/dsa_bits)

# Install
install(TARGETS dsa DESTINATION lib)

# Install the headers
install(FILES include/dsa DESTINATION include)

# Create base directory
install(DIRECTORY include/dsa_bits DESTINATION include)
