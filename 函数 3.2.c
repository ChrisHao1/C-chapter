//打印1~200的素数
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
//			return 0;//return 0; 的能力比break强 break只是跳出循环 return 0一执行，函数就结束了
//	}
//	return 1;//这里不需要判断条件if（j == n）上面return = 0直接可以结束函数，所以来到这里只有一种情况
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//is_prime(i)用来判断是否为素数的函数 如果是素数返回1，不是素数返回0
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//写一个函数判断一年是不是闰年
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) //||或者
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
//		//里面写一个函数判断是不是闰年
//		if (is_leap_year(year) == 1)//如果是闰年，返回1，如果不是返回0
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



////写一个函数，实现一个整形有序数组的二分查找
////二分查找：在一个有序数组中查找具体的某个数
////如果找到了，返回这个数的下标，找不到返回-1
////先确定下标，左边元素下标，右边元素下标，找到中间元素下标，如果中间元素比我们要找的数字要大，范围缩小到左边；如果中间元素比我们要找到的数字要小，范围缩小到右边
////我们可以发现在函数内部进行数组计算不行，可以在外部进行计算之后再拿进来用
//#include <stdio.h>
//int binary_search(int arr[], int k,int sz)//形参和实参名字相同没有问题 int arr[]本质上这里是一个指针
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这里计算的就是指针的大小，
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//求中间元素下标（必须在循环内）
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
//	int k = 7;//假设我们想找的数为7
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//binary二进制 arr去哪里查找 k找谁 arr传过去的是数组首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到该数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}



//写一个函数，每调用一次这个函数，就会将num的值增加1
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



//链式访问
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


//printf("%d", 43) printf返回值为打印在屏幕上字的个数 返回值为2
//printf("%d",2) 返回值为1
//printf("%d",1)
#include <stdio.h>
int main()
{
    printf("%d", printf("%d", printf("%d", 43)));
    //结果是啥？
    return 0;
}
















