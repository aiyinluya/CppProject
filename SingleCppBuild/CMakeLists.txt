# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.0)
# 项目名称
project(SingleCppBuild)
# 指定生成目标：将名为 main.cpp的源文件编译成一个名称为 singleCppBuild 的可执行文件
add_executable(singleCppBuild main.cpp)