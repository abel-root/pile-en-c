cmake_minimum_required (VERSION 3.23)
project(pile VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_INCLUDE_CURRENT_DIR}/inc)

set(SOURCES 
    ${SOURCE_DIR}/main.c
    ${SOURCE_DIR}/pile_static.c
    ${SOURCE_DIR}/pile_dynamic.c
)
set(HEADERS
   ${INCLUDE_DIR}/pile_dynamic.h
    ${INCLUDE_DIR}/pile_static.h
)
add_executable(lifo ${SOURCES})



target_include_directories(lifo PRIVATE ${HEADERS})