set(TARGET saboteur)

cmake_minimum_required(VERSION 3.0)

project(${TARGET} VERSION 1.0.0 LANGUAGES C)

include_directories(${ROOT_DIR})
include_directories(${PROJECT_SOURCE_DIR})

# link_directories( ${CMAKE_LIBRARY_OUTPUT_DIRECTORY} ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY} )

file(GLOB_RECURSE SRCS 
    ${PROJECT_SOURCE_DIR}/main.c
    ${PROJECT_SOURCE_DIR}/engine/*.c 
    ${PROJECT_SOURCE_DIR}/net/*.c 
    ${PROJECT_SOURCE_DIR}/util/*.c )


message( ${PROJECT_SOURCE_DIR} )

# aux_source_directory(. SRCS)

# aux_source_directory(. SRCS)

add_executable(${TARGET} ${SRCS})

# target_link_libraries(${TARGET} -lpthread ${This})
