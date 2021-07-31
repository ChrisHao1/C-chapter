////<>表示导入系统文件     ""表示导入自定义文件
//#include <stdio.h> //表示注释 导入一个文件 std是一个标准库 i input o output 标准输入输出库 .h头文件
//
//int main() //int数据类型 表示整型 如果出现在函数中表示函数的返回值,表示main函数返回一个整型    main函数为程序的主函数，程序的入口 程序有且只有一个主函数 ()里面表示函数的参数 函数的参数可以有多个，可以用逗号分割
//{          //{}函数体 代码体 程序体
//	printf("hello word\n"); //printf是stdio.h中系统提供的函数 表示在标准输出设备上打印字符串 ""称为字符串
//	return 0; //;表示一条语句结束 return如果在其他函数中表示函数结束 如果在main函数中表示程序结束 0表示函数返回值 要和函数返回值类型对应
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	char ch = 'a'; //'a'表示字符 char ch向计算机内存申请一块名叫ch的空间进行存放字符a
//	printf("%c\n", ch); //%c打印字符格式的数据
//
//	int age = 20;
//	printf("%d\n", age); //%d打印整型十进制数据
//
//	float f = 5.0; //打印浮点型 浮点型就是小数类型数字
//	printf("%f\n", f);
//
//	double f = 5.0;
//
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //打印出字节
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return  0;
//}
//
////定义变量的方法 int age = 150; float weight = 45.5f; char ch = 'W'
//
//
//
//#include <stdio.h>
//int num = 100;  //全局变量
//int main()
//{
//
//	int num = 10; //局部变量
//	printf("%d\n", num);
//
//	return 0;
//}
//
//
////局部变量仅仅限制在局部使用就是同一个程序块中使用
//#include <stdio.h>
//int main()
//{
//	{
//		int num = 10; //局部变量
//	}
//
//	printf("%d\n", num);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	//计算两个数字的和
//	int num1 = 1;
//	int num2 = 2;
//	int sum = 3;
//	//输入数据——使用输入函数scanf &取地址符号
//	scanf_s("%d%d", &num1, &num2);
//	//sum = 0; //c语言语法规定，变量要定义在当前代码块的最前面 如果不这样就会报错
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//
////局部变量仅仅限制在局部使用就是同一个程序块中使用 这样不能打印出
//#include <stdio.h>
//int main()
//{
//	{
//		int num = 10; //局部变量
//	}
//
//	printf("%d\n", num);
//	return 0;
//}
//
//
//
////局部变量仅仅限制在局部使用就是同一个程序块中使用 这样能打印出
//#include <stdio.h>
//int main()
//{
//	int num = 10; //局部变量
//	{
//		printf("%d\n", num);
//	}
//
//	return 0;
//}