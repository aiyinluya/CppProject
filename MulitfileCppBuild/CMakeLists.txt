cmake_minimum_required(VERSION 3.0)
project(MulitfileCppBuild)


#针对cpp文件比较少的情况可以这样直接引用编译
#只有cpp文件需要编译，.h文件不需要
# add_executable(mulitfileCppBuild main.cpp power.cpp)

# 针对cpp文件比较多的情况可以这样直接引用编译
# 指定当前目录下的源文件，保存到<ALL_SRCS>变量中
aux_source_directory(. ALL_SRCS)
add_executable(mulitfileCppBuild ${ALL_SRCS})