//��ӡ100~200���������Ż���
//#include <stdio.h>
//#include <math.h>//��ѧ�⺯��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	for (m = 100; m <= 200; m++)
//	{
//		for (n = 2; n <= sqrt(m); n++)//sqrt��ƽ������ѧ�⺯��
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



//��ӡ100~200���������ٴ��Ż���
//#include <stdio.h>
//#include <math.h>//��ѧ�⺯��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	for (m = 101; m <= 200; m+=2)
//	{
//		for (n = 2; n <= sqrt(m); n++)//sqrt��ƽ������ѧ�⺯��
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



//��дһ��������һ��1~100���������г��ֶ��ٸ�����9
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
//		if(i/10 == 9)//���ﲻ��Ϊelse if������99��һ��ifִ���꣬�ڶ��������else if�Ļ����Ͳ���ִ�У�Ҫ������if�ǲ��й�ϵ
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//����1/1-1/2+1/3-1/4+1/5+����+1/99-1/100��ֵ����ӡ�����
//�ȳ��Դ�ӡ1/1+1/2+1/3+1/4+1/5+����+1/99+1/100��ֵ
//#include <stdio.h>
//int i = 0;
//double sum = 0.0//���帡����
//int main()
//{
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0/i;//Ҫʹ�ý��ΪС�� �ͱ��뱣֤������������һ��Ϊ������
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}



//����һ
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



//������
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



//��10������������ֵ
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//�ٶ���һ���±��Ԫ�������ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������ĸ���
//	int i = 0;
//	for (i = 1; i < sz; i++)//���������е�ÿһ��Ԫ�أ�
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



//��ӡ9 * 9�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)//ȷ����ӡ9��
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);//%2d��ӡ��λ���֣����ֻ��һλ����ô���Ҷ��룻-%2d�������
//		}
//		printf("\n");//ÿ��ӡ��һ��֮����л���
//	}
//
//	return 0;
//}



//��������Ϸʵ��
#include <stdio.h>
void menu()
{
	printf("***************************\n");
	printf("****  1��play 0��exit  ****\n");
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
		menu();//����һ���˵�����
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//���������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//��Ϸ���ȵý�ȥһ��


	return 0;
}

















