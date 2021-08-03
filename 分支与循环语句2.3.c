////计算n个阶乘
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("res = %d\n", ret);
//
//	return 0;
//}



////计算1!+2!+……+10!阶乘的和
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i; //这里的ret为n的阶乘
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



////计算1!+2!+……+10!阶乘的和(优化）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n; //这里的ret为n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}




//在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0]
//<= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个数组
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//优化
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个数组
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
//	int left = 0;//定义一个左下标
//	int right = sz - 1;//定义一个右下标
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//折中算法 找出中间的下标
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



//编写代码，演示多个字符从两端移动，向中间汇聚。
//#include <stdio.h>
//#include <string.h>//调用strlen时用的库文件
//#include <windows.h>//调用sleep函数时用的库文件
//#include <stdlib.h>//调用system函数时用的库文件
//
//int main()
//{
//	char arr1[] = "We Can To Be A Superman";
//	char arr2[] = "#######################";
//	int left = 0;
//	//方法一（比较麻烦）：int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//为什么是减二呢？由于数组后面有一个默认的\0，如果只减1的话，得到的是\0的下标，所以要减2
//	int right = strlen(arr1) - 1;//strlen()函数求字符串长度，遇到\0就停止，不包含\0，下标总是比元素个数小一
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//每打印一次停留1000ms
//		system("cls");//执行系统命令的一个函数    cls————清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//
//	return 0;
//}



////编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确,则提示登录成，如果三次均输入错误，则退出程序
//#include <stdio.h>
//#include <string.h>//调用strcmp时用的库文件
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf_s("%s",password,20);//在vs2019编译环境下 需要把20这个数组个数写在变量名后面
//		if (strcmp(password,"123456") == 0)//==不能用等于来表示两个字符串是否相等 要使用库函数strcmp password和123456相等时，返回0
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次都输入失败，请退出系统\n");
//	}
//
//	return 0;
//}
