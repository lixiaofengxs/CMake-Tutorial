# project5 -> 链接静态库

# 指定 cmake 的最低版本
# 可选，非必须，不加可能有警告
cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(project6)

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

# 链接静态库
# 可以是全名 libcalc.a，也可以时去掉 lib 和 .a 后的名字 calc
# link_libraries(calc)
link_libraries(libcalc.a)

add_executable(calc ${SOURCE_FILE})

set(PROJECT_PATH ../)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_PATH}/bin)





