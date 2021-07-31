//字符串的结束标志 '\0'
//"abcdef" 后面自带\0 \0为转义字符表示的ASSIC值为0 数字0和\0在值上是相同的 '0'字符0的ASSIC值为45


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




//判断两个数字的大小（构建外部函数）
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x, int y) //num1传过去是整型 所以用int x进行接收
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	
	scanf("%d%d", &num1, &num2);
	
	max = Max(num1, num2); //创建一个Max函数 取得最大值最后返回到max

	printf("max = %d\n", max);

	return 0;
}














