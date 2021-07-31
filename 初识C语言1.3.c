////选择语句
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("你会打篮球吗？(选择1or0):>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("Good\n");
//	}
//	else
//	{
//		printf("Bad\n");
//	}
//
//}
//
//
//
////循环语句
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
////Add函数名  int x, int y函数参数
//int Add(int x, int y)
////{}为函数体
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int	num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	/*sum = num1 + num2;*/
//	sum = Add(num1, num2); //函数
//	scanf("%d%d", &num1, &num2);
//	//scanf strcpy strlen strcat 在vs中都认为不安全的 需要在源文件第一行添加#define _crt_secure_no_warnings 1
//
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//
//
////数组
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组 第一个数字的下标为0
//char ch[20];
//float arr[5];
//
//
//
////打印1~10个数字
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	
//
//	return 0;
//}
//
//
//
////运算符
//10 % 3 = 1; //取模
//10 / 3 = 3; //取余
//
//<< 左移操作符 >> 右移操作符
//int a = 1;
////整形1占4个字节 = 32bit 000000000000000000000000000001 a向左移动一位为 00000000000000000000000000000010（最左边一位丢弃，最右边补0）
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//
////在c语言中：0为假，一切非0为真
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a & b; //按位与，就是并且的意思 001 011 只有都为1时才为1 
//
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a | b; //按位或 001 011 只要有1就为1
//
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a ^ b; //按位异或 001 011 对应二进制位相同，则为0；对应的二进制位为相异，则为1
//
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//int a = 1; //=为赋值操作   ==判断相等
//a = a + 20;
//a += 20;
//a = a & 2;
//a &= 2;

