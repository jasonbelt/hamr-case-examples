cmake_minimum_required(VERSION 3.8.2)

project(vmsrc_process C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(${SB_Type_Library_DIR} SB_Type_Library)

add_library(vmsrc_process_lib STATIC
            vmsrc_process.c
            emitter.c
            includes/sb_emitter_t_impl.h)

target_include_directories(vmsrc_process_lib
                           PUBLIC PUBLIC includes)

target_link_libraries(vmsrc_process_lib
                      SB_Type_Library
                      -static-libgcc -static)
                                  
add_executable(vmsrc_process vmsrc_process.c)

target_link_libraries(vmsrc_process LINK_PUBLIC vmsrc_process_lib)
