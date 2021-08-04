//打印100~200的素数（优化）
//#include <stdio.h>
//#include <math.h>//数学库函数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	for (m = 100; m <= 200; m++)
//	{
//		for (n = 2; n <= sqrt(m); n++)//sqrt开平方的数学库函数
//		{
//			if (m % n == 0)
//				break;
//		}
//		if (n > sqrt(m))
//		{
//			count++;
//			printf("%d ", m);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//打印100~200的素数（再次优化）
//#include <stdio.h>
//#include <math.h>//数学库函数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	for (m = 101; m <= 200; m+=2)
//	{
//		for (n = 2; n <= sqrt(m); n++)//sqrt开平方的数学库函数
//		{
//			if (m % n == 0)
//				break;
//		}
//		if (n > sqrt(m))
//		{
//			count++;
//			printf("%d ", m);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//编写一个程序数一下1~100所有整数中出现多少个数字9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if(i/10 == 9)//这里不能为else if，对于99第一个if执行完，第二个如果是else if的话，就不能执行；要换成是if是并列关系
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//计算1/1-1/2+1/3-1/4+1/5+……+1/99-1/100的值，打印出结果
//先尝试打印1/1+1/2+1/3+1/4+1/5+……+1/99+1/100的值
//#include <stdio.h>
//int i = 0;
//double sum = 0.0//定义浮点型
//int main()
//{
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0/i;//要使得结果为小数 就必须保证除号两边至少一个为浮点型
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}



//方法一
//#include <stdio.h>
//int i = 0;
//int j = 0;
//double m = 0.0;
//double n = 0.0;
//double sum1 = 0.0;
//double sum2 = 0.0;
//double sum = 0.0;
//int main()
//{
//	for (i = 1; i <= 100; i+=2)
//	{
//		m = 1.0 / i;
//		sum1 += m;
//		printf("%lf ", m);
//	}
//	
//	for (j = 2; j <= 100; j += 2)
//	{
//		n = -(1.0 / j);
//		sum2 += n;
//		printf("%lf ", n);
//	}
//	sum = sum1 + sum2;
//	printf("\nsum = %lf\n", sum);
//
//	return 0;
//}



//方法二
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double j = 0.0;
//	double sum = 0.0;
//	int q = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		j = q*1.0 / i;
//		sum += j;
//		q = -q;
//	}
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}



//求10个整数中最大的值
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//假定第一个下标的元素是最大值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的个数
//	int i = 0;
//	for (i = 1; i < sz; i++)//遍历数组中的每一个元素，
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}



//打印9 * 9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//确定打印9行
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);//%2d打印两位数字，如果只有一位，那么像右对齐；-%2d向左对齐
//		}
//		printf("\n");//每打印完一行之后进行换行
//	}
//
//	return 0;
//}



//猜数字游戏实现
#include <stdio.h>
void menu()
{
	printf("***************************\n");
	printf("****  1、play 0、exit  ****\n");
	printf("***************************\n");
}

void game()
{

}

int main()
{
	int input = 0;
	do
	{
		menu();//创建一个菜单函数
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//进入这个游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//游戏首先得进去一次


	return 0;
}

















