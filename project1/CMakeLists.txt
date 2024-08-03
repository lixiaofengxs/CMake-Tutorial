# project1 -> 最基本的单cpp文件 CMakeLists.txt

# 指定 cmake 的最低版本
# 可选，非必须，不加可能有警告
cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(project1)

# 定义工程生成一个可执行程序
# add_executable(可执行程序名 源文件名称) 
# 这里的可执行程序名和项目名称没有任何关系
# 源文件可以是一个，也可以是多个，多个可用空格或;分隔
add_executable(main main.cpp)