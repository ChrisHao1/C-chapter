//����ʹ��scanf�����ı������
//#define _crt_secure_no_warnings 1 
//#include <stdio.h>
//int main()
//{
//	int	num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	//scanf strcpy strlen strcat ��vs�ж���Ϊ����ȫ�� ��Ҫ��Դ�ļ���һ�����#define _crt_secure_no_warnings 1
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
//	//const������ ��ʱ��num����const���εĳ�����
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//���泣��
//	3;
//	return 0;
//}
//
//
//
//#include <stdio.h>
////define����ı�ʾ������
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
////enum ö�ٹؼ�
//enum sex
//{
//	//male,female,secretö�ٳ��� ö�ٳ����������޸�
//	male,
//	female,
//	secret
//};
//
//int main()
//{
//	//enum sex sex = male�������sexΪö�ٱ������Ըı�
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
//	//���ַ����ŵ�һ�������� "abc"�������� 'a','b','c'�����صģ�'\0'ֵΪ0��Ϊ�ַ���������־
//	char arr1[] = "abc";
//	//���ַ�'a','b','c'�Ž�����
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
//	//���ַ����ŵ�һ�������� "abc"�������� 'a','b','c'�����صģ�'\0'ֵΪ0��Ϊ�ַ���������־
//	char arr1[] = "abc";
//	//���ַ�'a','b','c'�Ž�����
//	char arr2[] = { 'a','b','c'};
//	//strlen string�ַ��� length���� strlen�����ַ������� Ҫ������ͷ�ļ�#include<string.h>
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
//	//\32���������˽������� 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascii��ֵ����Ӧ�ַ�
//	//32����>10���� 26����>��Ϊasscii��ֵ������ַ�
//	printf("%c\n", '\32'); //��ӡ��\32��Ӧ���ַ� \ddd����1~3���˽������֣�d<=7���ڰ˽��������Ϊ7��
//	printf("%c\n", '\x61'); //\xdd��������ʮ���������� 
//	printf("%d\n", strlen("c:\test\32\test.c"));
//
//	return 0;
//}



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

