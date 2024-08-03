cmake_minimum_required(VERSION 3.10)

project(TESTSORT)

aux_source_directory(./ SRC)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})

set(EXECUTABLE_OUTPUT_PATH ${BIN_PATH})

add_executable(${TEST_SORT} ${SRC})

target_link_libraries(${TEST_SORT} ${SORT_LIB})