# CMake-Tutorial
learn how to use cmake build a project

## 1.什么是 cmake
cmake 是一个项目构建工具，可以帮助自动生成 Makefile 以及工程文件。

## 2.cmake的使用

## 2.1 注释
cmake 使用 # 注释
```cmake
# this is zhushi
cmake_minimum_required(VERSION 3.10)
```

## 2.2 执行
```shell
# cmake CMakeLists.txt 文件所在路径
cmake ..
# 修改源文件后只需要执行 make 即可
make
```

## 2.3 cmake 命令
```cmake
# 指定 cmake 的最低版本
# 可选，非必须，不加可能有警告
cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(project2)

# 定义工程生成一个可执行程序
# add_executable(可执行程序名 源文件名称) 
# 这里的可执行程序名和项目名称没有任何关系
# 源文件可以是一个，也可以是多个，多个可用空格或;分隔
add_executable(calc main.cpp add.cpp sub.cpp mul.cpp div.cpp)

# 当源文件很多时，每次要在 add_executable 中写出来很麻烦，
# 可以定义一个变量，将文件名存储到变量
set(SOURCE_FILE main.cpp add.cpp sub.cpp mul.cpp div.cpp)
add_executable(calc ${SOURCE_FILE})

# 指定使用的 C++ 标准为 C++11
set(CMAKE_CXX_STANDARD 11)

# 指定程序的输出路径。CMake 中指定可执行程序的输出路径，使用宏 EXECUTABLE_OUTPUT_PATH
# 当指定的路径目录不存在时，会自动创建
set(PROJECT_PATH ../) # 定义一个变量存储输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_PATH}/bin) # 将拼接好的路径设置给 EXECUTABLE_OUTPUT_PATH 宏
```



