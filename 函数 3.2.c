//��ӡ1~200������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i;j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//	    }
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;//return 0; ��������breakǿ breakֻ������ѭ�� return 0һִ�У������ͽ�����
//	}
//	return 1;//���ﲻ��Ҫ�ж�����if��j == n������return = 0ֱ�ӿ��Խ���������������������ֻ��һ�����
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//is_prime(i)�����ж��Ƿ�Ϊ�����ĺ��� �������������1��������������0
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//дһ�������ж�һ���ǲ�������
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) //||����
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		//����дһ�������ж��ǲ�������
//		if (is_leap_year(year) == 1)//��������꣬����1��������Ƿ���0
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



////дһ��������ʵ��һ��������������Ķ��ֲ���
////���ֲ��ң���һ�����������в��Ҿ����ĳ����
////����ҵ��ˣ�������������±꣬�Ҳ�������-1
////��ȷ���±꣬���Ԫ���±꣬�ұ�Ԫ���±꣬�ҵ��м�Ԫ���±꣬����м�Ԫ�ر�����Ҫ�ҵ�����Ҫ�󣬷�Χ��С����ߣ�����м�Ԫ�ر�����Ҫ�ҵ�������ҪС����Χ��С���ұ�
////���ǿ��Է����ں����ڲ�����������㲻�У��������ⲿ���м���֮�����ý�����
//#include <stdio.h>
//int binary_search(int arr[], int k,int sz)//�βκ�ʵ��������ͬû������ int arr[]������������һ��ָ��
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//�������ľ���ָ��Ĵ�С��
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//���м�Ԫ���±꣨������ѭ���ڣ�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//�����������ҵ���Ϊ7
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//binary������ arrȥ������� k��˭ arr����ȥ����������Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}



//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//#include <stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//
//	return 0;
//}



//��ʽ����
//#include <stdio.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


//printf("%d", 43) printf����ֵΪ��ӡ����Ļ���ֵĸ��� ����ֵΪ2
//printf("%d",2) ����ֵΪ1
//printf("%d",1)
#include <stdio.h>
int main()
{
    printf("%d", printf("%d", printf("%d", 43)));
    //�����ɶ��
    return 0;
}
















