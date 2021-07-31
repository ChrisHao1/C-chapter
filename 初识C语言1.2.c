//避免使用scanf带来的编译错误
//#define _crt_secure_no_warnings 1 
//#include <stdio.h>
//int main()
//{
//	int	num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	//scanf strcpy strlen strcat 在vs中都认为不安全的 需要在源文件第一行添加#define _crt_secure_no_warnings 1
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	//const长属性 这时候num就是const修饰的常变量
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//字面常量
//	3;
//	return 0;
//}
//
//
//
//#include <stdio.h>
////define定义的表示符常量
//#define num  1
//int main()
//{
//	
//	printf("%d\n", num);
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
////enum 枚举关键
//enum sex
//{
//	//male,female,secret枚举常量 枚举常量不可以修改
//	male,
//	female,
//	secret
//};
//
//int main()
//{
//	//enum sex sex = male；这里的sex为枚举变量可以改变
//	printf("%d\n",male);
//	printf("%d\n",female);
//	printf("%d\n",secret);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	//把字符串放到一个数组里 "abc"这里面有 'a','b','c'，隐藏的：'\0'值为0，为字符串结束标志
//	char arr1[] = "abc";
//	//把字符'a','b','c'放进数组
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//把字符串放到一个数组里 "abc"这里面有 'a','b','c'，隐藏的：'\0'值为0，为字符串结束标志
//	char arr1[] = "abc";
//	//把字符'a','b','c'放进数组
//	char arr2[] = { 'a','b','c'};
//	//strlen string字符串 length长度 strlen计算字符串长度 要有引用头文件#include<string.h>
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//
//	printf("%s\n","\"");
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//\32代表两个八进制数字 32作为8进制代表的那个十进制数字，作为ascii码值，对应字符
//	//32——>10进制 26——>作为asscii码值代表的字符
//	printf("%c\n", '\32'); //打印出\32对应的字符 \ddd代表1~3个八进制数字，d<=7（在八进制中最大为7）
//	printf("%c\n", '\x61'); //\xdd代表两个十六进制数字 
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//	return 0;
//}



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

