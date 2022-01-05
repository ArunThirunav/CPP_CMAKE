cmake_minimum_required(VERSION 3.0.0)
project(CPP_learning VERSION 0.1.0)

# Paths to the files that are needed in the project
SET(SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Source)
SET(INC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Includes)

file(GLOB_RECURSE USER_SOURCES ${SRC_PATH}/*.c  ${SRC_PATH}/*.cpp)

# printing the included source files in the project
FOREACH (SRC_EACH_FILE ${USER_SOURCES})
    message(${SRC_EACH_FILE})
ENDFOREACH()

# header file directory path in the project
INCLUDE_DIRECTORIES(${INC_PATH})

# output file if needed add .elf/.out to the name
add_executable(${PROJECT_NAME} main.cpp ${USER_SOURCES})

