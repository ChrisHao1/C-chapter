////ѡ�����
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("����������(ѡ��1or0):>");
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
////ѭ�����
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
////Add������  int x, int y��������
//int Add(int x, int y)
////{}Ϊ������
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
//	sum = Add(num1, num2); //����
//	scanf("%d%d", &num1, &num2);
//	//scanf strcpy strlen strcat ��vs�ж���Ϊ����ȫ�� ��Ҫ��Դ�ļ���һ�����#define _crt_secure_no_warnings 1
//
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//
//
////����
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ����� ��һ�����ֵ��±�Ϊ0
//char ch[20];
//float arr[5];
//
//
//
////��ӡ1~10������
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
////�����
//10 % 3 = 1; //ȡģ
//10 / 3 = 3; //ȡ��
//
//<< ���Ʋ����� >> ���Ʋ�����
//int a = 1;
////����1ռ4���ֽ� = 32bit 000000000000000000000000000001 a�����ƶ�һλΪ 00000000000000000000000000000010�������һλ���������ұ߲�0��
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//
////��c�����У�0Ϊ�٣�һ�з�0Ϊ��
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a & b; //��λ�룬���ǲ��ҵ���˼ 001 011 ֻ�ж�Ϊ1ʱ��Ϊ1 
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
//	int c = a | b; //��λ�� 001 011 ֻҪ��1��Ϊ1
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
//	int c = a ^ b; //��λ��� 001 011 ��Ӧ������λ��ͬ����Ϊ0����Ӧ�Ķ�����λΪ���죬��Ϊ1
//
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//int a = 1; //=Ϊ��ֵ����   ==�ж����
//a = a + 20;
//a += 20;
//a = a & 2;
//a &= 2;

