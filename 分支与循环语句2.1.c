//return 0��
//printf("%d\n", a);
//;�����


//��֧���if
//�﷨�ṹ
//if (���ʽ)
//	���;
//
//
//if (���ʽ)
//	���1��
//else
//	���2;
//
//if (���ʽ1)
//	���1;
//else if (���ʽ2)
//	���2;
//else
//	���3;



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//
//	if (a < 18)
//	{
//		printf("������\n"); ////���Ҫ���������� �ͱ����ú��������ʽ
//		printf("������\n");
//	}
//	else if (a >= 18 && a < 50) //ע�����ﲻ��д�� 18<=a<50 ��������aΪ10������ͻ�ִ��
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}



//����else
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}



//if��д��ʽ�ĶԱ�
//if (condition)
//{
//	return x;
//}
//rerurn y;
//
//
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 4;
//	if (num = 5) //=Ϊ��ֵ ==Ϊ���
//	{
//		printf("haha\n", num);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 4;
//	if (5 == num) //=Ϊ��ֵ ==Ϊ���
//	{
//		printf("haha\n", num);
//	}
//
//	return 0;
//}



//���1~100������
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//
//		i++;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);	
//		i += 2;
//	}
//
//	return 0;
//}



//switch���
//#include <stdio.h>
//int main()
//{
//	int day = 1;
//	scanf_s("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n", day);
//	case 2:
//		printf("���ڶ�\n", day);
//	case 3:
//		printf("������\n", day);
//		break;
//	case 4:
//		printf("������\n", day);
//	case 5:
//		printf("������\n", day);
//	case 6:
//		printf("������\n", day);
//	case 7:
//		printf("������\n", day);
//	}
//
//	return 0;
//}



//switch���
//#include <stdio.h>
//int main()
//{
//	int day = 1;
//	scanf_s("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    
//    return 0;
//}



//while(���ʽ)
//	ѭ����䣺



////����Ļ�ϴ�ӡ1~10
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}



//����Ļ�ϴ�ӡ1~10
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
		i++;
	}

	return 0;
}
