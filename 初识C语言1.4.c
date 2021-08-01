////字符串的结束标志 '\0'
////"abcdef" 后面自带\0 \0为转义字符表示的ASSIC值为0 数字0和\0在值上是相同的 '0'字符0的ASSIC值为45
//
//
////判断两个数字的大小
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	if (num1 > num2)
//	{
//		printf("输出较大值: %d\n", num1);
//	}
//	else(num1 <= num2);
//	{
//		printf("输出较小值: %d\n",num1);
//	}
//
//	return 0;
//}
//
//
//
//
////判断两个数字的大小（构建外部函数）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Max(int x, int y) //num1传过去是整型 所以用int x进行接收
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	
//	max = Max(num1, num2); //创建一个Max函数 取得最大值最后返回到max
//
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//
////sizeof（）计算字节
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//
//	printf("%d\n",sizeof(a)); //计算变量类型的长度 
//	printf("%d\n", sizeof(int)); //这里括号不能省略
//	printf("%d\n", sizeof a); //计算变量大小括号可以省略
//	printf("%d\n", sizeof(arr)); //计算数组大小 单位为字节 1个整形为4个字节 所以为24个字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //计算数组元素的个数
//	return 0;
//}
//
//
//
////按（二进制）位取反
//#include <stdio.h>
//int main()
//{
//	int a = 0;  //4个字节 32个比特位 正数的原码、反码、补码相同
//	int b = ~a; //b = 11111111111111111111111111111111 b位有符号的整型 最高位（左边）表示符号位，为负数（当为1时为负数，0时为正数）
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//原码 符号位不变，其他位按位取反得到反码  反码加1得到补码
//	printf("%d", b); //打印的为这个数字原码
//	//补码：11111111111111111111111111111111 反码：11111111111111111111111111111110 原码：10000000000000000000000000000001
//	return 0;
//
//}
//
//
//
////++和— —
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++; //后置++，先使用再++    先赋值给b a再++
//	int c = 10;
//	int d = ++c; //前置++，先++再赋值    先++，再赋值
//	printf("a = %d b = %d\n", a, b);
//	printf("c = %d d = %d\n", c, d);
//
//	return 0;
//}
//
//
//
//
////&&逻辑与 ||逻辑或
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a && b; //a为真 b为真 逻辑与是并且的意思 只有当a与b都为真时，才为真
//	int d = a || b;
//	printf("c = %d\n", c);
//	printf("c = %d\n", d); //l逻辑或 只要a和b中有一个为真就为真
//
//	return 0;
//}



////typedef
//#include <stdio.h>
//int main()
//{
//	unsigned int num = 20；
//	typedef unsigned int u_int; //
//	u_int num = 20;
//	printf("%d\n", num);
//	
//	return 0;
//}
//
//
//#include <stdio.h>
//void test () //创建的test函数
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



////加了static修饰局部变量
//#include <stdio.h>
//void test() //创建的test函数
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a); //a是一个静态的局部变量
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



////static修饰全局变量
//#include <stdio.h>
//int main()
//{
//	//extern--声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//
//	return 0;
//}




////static修饰函数
//#include <stdio.h>
//extern int Add(int, int); //声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d", sum);
//
//	return 0;
//}



////#define定义常量
//#include <stdio.h>
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}



////define定义宏
//#include <stdio.h>
//#define Max(x,y) (x>y?x:y)
////int Max(int x, int y)
////{
////	if (x > y)
////	{
////		return x;
////	}
////	else
////	{
////		return y;
////	}
////}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = % d\n", max);
//
//
//	return 0;
//}




////地址
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //有一种变量是用来存放地址的——指针变量 p的类型是int*
//	//*p  *解引用操作符/间接访问操作符
//	*p = 20;
//
//	printf("%p\n", &a); //&a取地址 打印出a的地址
//	printf("%p\n", p); //打印出a的地址
//	printf("a = %d\n", a);
//
//	return 0;
//}


////字符的取地址
//#include <stdio.h>
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//
//	printf("ch = %c\n", ch);
//
//	return 0;
//}
























