//函数小事例
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
//	int sum = Add(a,b);//创建一个Add函数 a，b为输入参数 返回存储到sum中
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//使用strcpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);//arr2存放的地方 arr1数据的来源
//	printf("%s\n", arr2);
//
//	return 0;
//}



//使用memset内存设置
//#include <stdio.h>
//int main()
//{
//	char arr[] = "play basketball";
//	memset(arr, '#', 4);//arr想要改变的数组名 #改变成的内容 4改变的个数
//	printf("%s\n", arr);
//
//	return 0;
//}



//找出两个数中的较大值
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



////写一个函数可以交换两个整形变量的内容(存在问题）
//#include <stdio.h>
//void Swap(int x, int y)//由于没有返回值，所以返回类型为void（没有值）
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
//	Swap(a, b);//这里为交换函数，只需要交换，并不像比大小一样需要返回什么值
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}


//#include <stdio.h>
//void Swap(int* pa, int* pb)//由于没有返回值，所以返回类型为void（没有值）
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
//	Swap(&a, &b);//这里为交换函数，只需要交换，并不像比大小一样需要返回什么值    pa = &a pa存放a的地址，称为指针变量 pa的类型为int* *pa解引用操作，通过pa中存在的地址，找到所指向的内容
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}





























