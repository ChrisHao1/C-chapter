//�ַ����Ľ�����־ '\0'
//"abcdef" �����Դ�\0 \0Ϊת���ַ���ʾ��ASSICֵΪ0 ����0��\0��ֵ������ͬ�� '0'�ַ�0��ASSICֵΪ45


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




//�ж��������ֵĴ�С�������ⲿ������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x, int y) //num1����ȥ������ ������int x���н���
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
	
	max = Max(num1, num2); //����һ��Max���� ȡ�����ֵ��󷵻ص�max

	printf("max = %d\n", max);

	return 0;
}














