cmake_minimum_required(VERSION 3.10)

project(TESTCALC)

aux_source_directory(./ SRC)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})

link_libraries(${CALC_LIB})

set(EXECUTABLE_OUTPUT_PATH ${BIN_PATH})

add_executable(${TEST_CALC} ${SRC})