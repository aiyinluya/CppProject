# 这里不需要再重复指定版本号等等，只需要把文件都包含进来，然后生成一个链接库就行了，子目录中的CMakeLists本质上是去生成一个链接库
aux_source_directory(. LIB_SRCS)
# 当前目录下的文件生成一个链接库
add_library(power ${LIB_SRCS})