//写出三个数,按从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	
//	if (a < b)
//	{
//		int d = a;//定义一个变量存放a，为的是让a和b进行换序
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//写一个代码打印3的倍数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}



//给定两个数，求这两个数的最大公约数
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)//只要存在余数就进入循环
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}



//打印1000年到2000年之间的闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;//如果是闰年，就计数一次
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);//在count之前的\n是先进行换行
//
//	return 0;
//}



//打印100~200的素数
#include <stdio.h>
int main()
{
	int m = 0;
	int count = 0;
	for (m = 100; m <= 200; m++)
	{
		int n = 0;
		for (n = 2; n < m; n++)
		{
			if (m % n == 0)
			{
				break;//break跳出循环
			}
		}
		//第一种情况break跳出循环 第二种情况循环不再满足
		if (n == m)
		{
			count++;
			printf("%d ", m);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}