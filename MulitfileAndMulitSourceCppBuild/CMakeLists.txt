cmake_minimum_required(VERSION 3.0)
# 赋值给PROJECT_NAME
project(MulitfileAndMulitSourceCppBuild)
# 把当前目录下的所有cpp文件名保存到一个变量中
aux_source_directory(. ALL_SRCS)
# 如果是多个目录编译，首先使用add_subdirectory命令需要把目录包含进来，然后使用target_link_libraries命令，把子项目链接到对应的主项目
# 添加math子目录:指明本项目包含一个子目录 math，这样 math 目录下的 CMakeLists.txt 文件和源代码也会被处理
add_subdirectory(math)
add_executable(${PROJECT_NAME} ${ALL_SRCS})
# 添加链接库，power是在math子目录的CMakeLists中定义的:指明可执行文件 main 需要连接一个名为 power 的链接库
target_link_libraries(${PROJECT_NAME} power)