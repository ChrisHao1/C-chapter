//д��������,���Ӵ�С���
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
//		int d = a;//����һ���������a��Ϊ������a��b���л���
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



//дһ�������ӡ3�ı���
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



//���������������������������Լ��
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)//ֻҪ���������ͽ���ѭ��
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}



//��ӡ1000�굽2000��֮�������
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
//			count++;//��������꣬�ͼ���һ��
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);//��count֮ǰ��\n���Ƚ��л���
//
//	return 0;
//}



//��ӡ100~200������
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
				break;//break����ѭ��
			}
		}
		//��һ�����break����ѭ�� �ڶ������ѭ����������
		if (n == m)
		{
			count++;
			printf("%d ", m);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}