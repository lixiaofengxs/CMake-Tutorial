# project8 -> 嵌套CMake

cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(project8)

# 嵌套的 CMake 也是一个树状结构，最顶层的 CMakeLists.txt 是根节点，其次都是子节点
#   根节点CMakeLists.txt中的变量全局有效
#   父节点CMakeLists.txt中的变量可以在子节点中使用
#   子节点CMakeLists.txt中的变量只能在当前节点中使用


# 根节点的 CMakeLists.txt 文件主要做两件事：定义变量 && 添加子目录
#   1.定义变量
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib) # 静态库生成路径
set(BIN_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin) # 测试程序生成路径
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/inc) # 头文件目录

set(CALC_LIB calc) # 静态库名称
set(SORT_LIB sort) # 动态库名称

set(TEST_CALC test_calc) # 可执行程序名称
set(TEST_SORT test_sort) # 可执行程序名称

#   2.添加子目录
add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test_calc)
add_subdirectory(test_sort)









