//第一天22.3.19
// 输出hallo world
//#include <stdio.h> //包含一个叫 stdio.h 的文件
//char main()//主函数-程序入口-不可或缺且只有一个
//{
//	printf("hallo world\n"); // \n 换行
//	return 0;
//}

/* #include<> 调用库函数 */
/* main函数的结构，main前面的int表示main函数调用后返回一个整型值
* int main()
* {
*  return 0;//返回0
   }
*/

//第二天22.3.20
/*数据类型
char        字符数据类型      1byte=8bit=4字符
short       短整型            2byte=16bit=8字符
int         整形              4byte=32bit=16字符
long        长整型            4/8byte=32/64bit=16/32字符
long long   更长的整型        8byte=64bit=32字符
float       单精度浮点数      4byte=32bit=16字符
double      双精度浮点数      8byte=644bit=32字符
*/

//各种字符类型的大小
// #include<stdio.h>
// int main() {
// 	//char ch = 'a';
// 	//printf("%c\n",ch); // %c -- 打印字符格式的数据
// 	//int age = 20;
// 	//printf("%d\n",age);
// 	//float fl = 20.66;
// 	//printf("%f\n", fl);
// 	// 二进制转十进制  011  1*10^0+1*10^2+0*10^3
//     //查看各种字符类型的大小     
// 	printf("%d\n", sizeof(char));        // 1byte=8bit  
// 	printf("%d\n", sizeof(short));       // 2byte=16bit 最大数字为2^16-1
// 	printf("%d\n", sizeof(int));         // 4
// 	printf("%d\n", sizeof(long));        // 4
// 	printf("%d\n", sizeof(long long));   // 8
// 	printf("%d\n", sizeof(float));       // 4
// 	printf("%d\n", sizeof(double));      // 8
//  	return 0;
// }

//第三天22.3.21
/*
* 全局变量和局部变量
* 全局变量 定义在代码块{}之外的变量
* 局部变量 定义在代码块{}之内的变量
* 局部变量和全局变量建议不要相同，相同会出现bug
* 局部变量和全局变量名称相同时，局部变量优先
* 变量要定义在代码块的最前面
* 全局变量的生命周期为整个程序的生命周期
* 局部变量的生命周期只在作用域中
*/

/*
#include<stdio.h>
int age = 20;             //全局变量，生命周期为整个程序的生命周期，在整个程序任何位置可用
int main() {
	{int age = 40;         //局部变量,生命周期只在作用域中
	printf("%d\n", age);   //40  调用区间变量
	}                      
	printf("%d\n", age);   //20  调用全局变量
	int num1 = 0;
	int num2 = 0;
    int sum = 0;
	scanf("%d%d",&num1,&num2); //取地址符 &
	sum = num1 + num2;
	printf("num1= %d\n", num1);
	printf("num2= %d\n", num2);
	printf("sum= %d\n", sum);
	return 5;
}
*/