# C-language-Study-diary
这是我的一个C语言的学习日记，我将在此纪录我C语言的学习过程

This is my C language learning diary. I will record my C language learning process here

# 22.3.19第一天

今天主要是进行了c语言环境的安装以及 "hallow world" 的实现，输出函数的实现

我在使用了visual studio 2022 进行c语言环境的部署 同时使用编译器为visual studio 2022

# 22.3.20第二天

今天主要学习了字符函数，以及各种字符函数的最大长度

数据类型

char        字符数据类型      1byte=8bit=4字符

short       短整型            2byte=16bit=8字符

int         整形              4byte=32bit=16字符

long        长整型            4/8byte=32/64bit=16/32字符

long long   更长的整型        8byte=64bit=32字符

float       单精度浮点数      4byte=32bit=16字符

double      双精度浮点数      8byte=644bit=32字符

# 22.3.21第三天

今天主要学习局部变量和常量以及 scanf(); 的使用

全局变量和局部变量

全局变量 定义在代码块{}之外的变量

局部变量 定义在代码块{}之内的变量

局部变量和全局变量建议不要相同，相同会出现bug

局部变量和全局变量名称相同时，局部变量优先

变量要定义在代码块的最前面

全局变量的生命周期为整个程序的生命周期

局部变量的生命周期只在作用域中

scanf()函数在使用时需注意在vs中不可直接使用，直接使用会报 “ 返回值被忽略:“scanf” ” 的错误，可通过下面两种方式解决：

1. 在文件的最开始添加下面一行。

#define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错

2. 将使用的scanf函数替换为scanf_s。

