# project7 -> 宏定义

# 指定 cmake 的最低版本
# 可选，非必须，不加可能有警告
cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(project7)

# 定义工程生成一个可执行程序
# add_executable(可执行程序名 源文件名称) 
# 这里的可执行程序名和项目名称没有任何关系
# 源文件可以是一个，也可以是多个，多个可用空格或;分隔
# add_executable(calc main.cpp add.cpp sub.cpp mul.cpp div.cpp)

# 当源文件很多时，每次要写出来很麻烦，
# 可以定义一个变量，将文件名存储到变量
#set(SOURCE_FILE main.cpp add.cpp sub.cpp mul.cpp div.cpp)
#add_executable(calc ${SOURCE_FILE})

# 指定头文件的目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# 当一个项目中源文件很多时，要一一写出来不太现实
# CMake 中提供了搜索文件的命令，可以使用 aux_source_directory 或 file

# CMAKE_CURRENT_SOURCE_DIR 宏表示访问当前 CMakeLists.txt 文件所在的目录
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCE_FILE)

# file(GLOB/GLOB_RECURSE 变量名 要搜索的文件路径和文件类型) 注意：不能缺少文件类型
# GLOB: 将指定目录下搜索到的满足条件的所有文件名生成一个列表，并将其存储到变量中。
# GLOB_RECURSE：递归搜索指定目录，将搜索到的满足条件的文件名生成一个列表，并将其存储到变量中。
file(GLOB SOURCE_FILE ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 指定库路径
# 如果链接的库不是系统的(自己制作的或第三方提供的库)，
# 可能出现找不到，此时需要指定库的路径。
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

# cmake 中可以通过 add_definitions(-D宏名称) 来定义
add_definitions(-DDEBUG)

set(PROJECT_PATH ../)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_PATH}/bin)

add_executable(main ${SOURCE_FILE})


# 动态库的链接和静态库是完全不同的：
#   1.静态库会在生成可执行程序的链接阶段被打包到可执行程序中，所以可执行程序启动，静态库就被加载到内存中了。
#   2.动态库在生成可执行程序的链接阶段不会被打包到可执行程序中，
#   当可执行程序被启动并且调用了动态库中的函数的时候，动态库才会被加载到内存

# 在 cmake 中指定要链接的动态库的时候，应该将命令写到生成了可执行文件之后

# 链接动态库
# 可以是全名 libcalc.a，也可以时去掉 lib 和 .a 后的名字 calc
# target_link_libraries(main calc pthread)
target_link_libraries(main calc)


# CMake 中常用的宏
#   PROJECT_SOURCE_DIR : cmake 命令后面紧跟的的目录
#   CMAKE_CURRENT_SOURCE_DIR : 当前处理的 CMakeLists.txt 所在目录
#   PROJECT_NAME : 返回使用 project 命令指定的项目名称
#   EXECUTABLE_OUTPUT_PATH : 目标二进制可执行程序的路径
#   LIBRARY_OUTPUT_PATH : 目标链接库文件的路径





