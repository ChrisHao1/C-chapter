//����С����
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//����һ��Add���� a��bΪ������� ���ش洢��sum��
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//ʹ��strcpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);//arr2��ŵĵط� arr1���ݵ���Դ
//	printf("%s\n", arr2);
//
//	return 0;
//}



//ʹ��memset�ڴ�����
//#include <stdio.h>
//int main()
//{
//	char arr[] = "play basketball";
//	memset(arr, '#', 4);//arr��Ҫ�ı�������� #�ı�ɵ����� 4�ı�ĸ���
//	printf("%s\n", arr);
//
//	return 0;
//}



//�ҳ��������еĽϴ�ֵ
//#include <stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}



////дһ���������Խ����������α���������(�������⣩
//#include <stdio.h>
//void Swap(int x, int y)//����û�з���ֵ�����Է�������Ϊvoid��û��ֵ��
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a = %d b = %d\n", a, b);
//	Swap(a, b);//����Ϊ����������ֻ��Ҫ������������ȴ�Сһ����Ҫ����ʲôֵ
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}


//#include <stdio.h>
//void Swap(int* pa, int* pb)//����û�з���ֵ�����Է�������Ϊvoid��û��ֵ��
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);//����Ϊ����������ֻ��Ҫ������������ȴ�Сһ����Ҫ����ʲôֵ    pa = &a pa���a�ĵ�ַ����Ϊָ����� pa������Ϊint* *pa�����ò�����ͨ��pa�д��ڵĵ�ַ���ҵ���ָ�������
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}





























