////�ַ����Ľ�����־ '\0'
////"abcdef" �����Դ�\0 \0Ϊת���ַ���ʾ��ASSICֵΪ0 ����0��\0��ֵ������ͬ�� '0'�ַ�0��ASSICֵΪ45
//
//
////�ж��������ֵĴ�С
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
//		printf("����ϴ�ֵ: %d\n", num1);
//	}
//	else(num1 <= num2);
//	{
//		printf("�����Сֵ: %d\n",num1);
//	}
//
//	return 0;
//}
//
//
//
//
////�ж��������ֵĴ�С�������ⲿ������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Max(int x, int y) //num1����ȥ������ ������int x���н���
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
//	max = Max(num1, num2); //����һ��Max���� ȡ�����ֵ��󷵻ص�max
//
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//
////sizeof���������ֽ�
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//
//	printf("%d\n",sizeof(a)); //����������͵ĳ��� 
//	printf("%d\n", sizeof(int)); //�������Ų���ʡ��
//	printf("%d\n", sizeof a); //���������С���ſ���ʡ��
//	printf("%d\n", sizeof(arr)); //���������С ��λΪ�ֽ� 1������Ϊ4���ֽ� ����Ϊ24���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //��������Ԫ�صĸ���
//	return 0;
//}
//
//
//
////���������ƣ�λȡ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;  //4���ֽ� 32������λ ������ԭ�롢���롢������ͬ
//	int b = ~a; //b = 11111111111111111111111111111111 bλ�з��ŵ����� ���λ����ߣ���ʾ����λ��Ϊ��������Ϊ1ʱΪ������0ʱΪ������
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�� ����λ���䣬����λ��λȡ���õ�����  �����1�õ�����
//	printf("%d", b); //��ӡ��Ϊ�������ԭ��
//	//���룺11111111111111111111111111111111 ���룺11111111111111111111111111111110 ԭ�룺10000000000000000000000000000001
//	return 0;
//
//}
//
//
//
////++�͡� ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++; //����++����ʹ����++    �ȸ�ֵ��b a��++
//	int c = 10;
//	int d = ++c; //ǰ��++����++�ٸ�ֵ    ��++���ٸ�ֵ
//	printf("a = %d b = %d\n", a, b);
//	printf("c = %d d = %d\n", c, d);
//
//	return 0;
//}
//
//
//
//
////&&�߼��� ||�߼���
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a && b; //aΪ�� bΪ�� �߼����ǲ��ҵ���˼ ֻ�е�a��b��Ϊ��ʱ����Ϊ��
//	int d = a || b;
//	printf("c = %d\n", c);
//	printf("c = %d\n", d); //l�߼��� ֻҪa��b����һ��Ϊ���Ϊ��
//
//	return 0;
//}



////typedef
//#include <stdio.h>
//int main()
//{
//	unsigned int num = 20��
//	typedef unsigned int u_int; //
//	u_int num = 20;
//	printf("%d\n", num);
//	
//	return 0;
//}
//
//
//#include <stdio.h>
//void test () //������test����
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



////����static���ξֲ�����
//#include <stdio.h>
//void test() //������test����
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a); //a��һ����̬�ľֲ�����
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



////static����ȫ�ֱ���
//#include <stdio.h>
//int main()
//{
//	//extern--�����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//
//	return 0;
//}




////static���κ���
//#include <stdio.h>
//extern int Add(int, int); //�����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d", sum);
//
//	return 0;
//}



////#define���峣��
//#include <stdio.h>
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}



////define�����
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




////��ַ
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //��һ�ֱ�����������ŵ�ַ�ġ���ָ����� p��������int*
//	//*p  *�����ò�����/��ӷ��ʲ�����
//	*p = 20;
//
//	printf("%p\n", &a); //&aȡ��ַ ��ӡ��a�ĵ�ַ
//	printf("%p\n", p); //��ӡ��a�ĵ�ַ
//	printf("a = %d\n", a);
//
//	return 0;
//}


////�ַ���ȡ��ַ
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
























