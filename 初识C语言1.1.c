////<>��ʾ����ϵͳ�ļ�     ""��ʾ�����Զ����ļ�
//#include <stdio.h> //��ʾע�� ����һ���ļ� std��һ����׼�� i input o output ��׼��������� .hͷ�ļ�
//
//int main() //int�������� ��ʾ���� ��������ں����б�ʾ�����ķ���ֵ,��ʾmain��������һ������    main����Ϊ��������������������� ��������ֻ��һ�������� ()�����ʾ�����Ĳ��� �����Ĳ��������ж���������ö��ŷָ�
//{          //{}������ ������ ������
//	printf("hello word\n"); //printf��stdio.h��ϵͳ�ṩ�ĺ��� ��ʾ�ڱ�׼����豸�ϴ�ӡ�ַ��� ""��Ϊ�ַ���
//	return 0; //;��ʾһ�������� return��������������б�ʾ�������� �����main�����б�ʾ������� 0��ʾ��������ֵ Ҫ�ͺ�������ֵ���Ͷ�Ӧ
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	char ch = 'a'; //'a'��ʾ�ַ� char ch�������ڴ�����һ������ch�Ŀռ���д���ַ�a
//	printf("%c\n", ch); //%c��ӡ�ַ���ʽ������
//
//	int age = 20;
//	printf("%d\n", age); //%d��ӡ����ʮ��������
//
//	float f = 5.0; //��ӡ������ �����;���С����������
//	printf("%f\n", f);
//
//	double f = 5.0;
//
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //��ӡ���ֽ�
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return  0;
//}
//
////��������ķ��� int age = 150; float weight = 45.5f; char ch = 'W'
//
//
//
//#include <stdio.h>
//int num = 100;  //ȫ�ֱ���
//int main()
//{
//
//	int num = 10; //�ֲ�����
//	printf("%d\n", num);
//
//	return 0;
//}
//
//
////�ֲ��������������ھֲ�ʹ�þ���ͬһ���������ʹ��
//#include <stdio.h>
//int main()
//{
//	{
//		int num = 10; //�ֲ�����
//	}
//
//	printf("%d\n", num);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	//�����������ֵĺ�
//	int num1 = 1;
//	int num2 = 2;
//	int sum = 3;
//	//�������ݡ���ʹ�����뺯��scanf &ȡ��ַ����
//	scanf_s("%d%d", &num1, &num2);
//	//sum = 0; //c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�� ����������ͻᱨ��
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//
////�ֲ��������������ھֲ�ʹ�þ���ͬһ���������ʹ�� �������ܴ�ӡ��
//#include <stdio.h>
//int main()
//{
//	{
//		int num = 10; //�ֲ�����
//	}
//
//	printf("%d\n", num);
//	return 0;
//}
//
//
//
////�ֲ��������������ھֲ�ʹ�þ���ͬһ���������ʹ�� �����ܴ�ӡ��
//#include <stdio.h>
//int main()
//{
//	int num = 10; //�ֲ�����
//	{
//		printf("%d\n", num);
//	}
//
//	return 0;
//}