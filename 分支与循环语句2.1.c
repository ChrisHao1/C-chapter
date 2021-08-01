//return 0；
//printf("%d\n", a);
//;空语句


//分支语句if
//语法结构
//if (表达式)
//	语句;
//
//
//if (表达式)
//	语句1；
//else
//	语句2;
//
//if (表达式1)
//	语句1;
//else if (表达式2)
//	语句2;
//else
//	语句3;



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//
//	if (a < 18)
//	{
//		printf("青少年\n"); ////如果要输出两条语句 就必须用函数块的型式
//		printf("有力气\n");
//	}
//	else if (a >= 18 && a < 50) //注意这里不能写成 18<=a<50 这样假如a为10，这里就会执行
//	{
//		printf("成年人\n");
//	}
//	else
//	{
//		printf("老年人\n");
//	}
//	return 0;
//}



//悬空else
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



//if书写形式的对比
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
//	if (num = 5) //=为赋值 ==为相等
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
//	if (5 == num) //=为赋值 ==为相等
//	{
//		printf("haha\n", num);
//	}
//
//	return 0;
//}



//输出1~100的奇数
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



//switch语句
//#include <stdio.h>
//int main()
//{
//	int day = 1;
//	scanf_s("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n", day);
//	case 2:
//		printf("星期二\n", day);
//	case 3:
//		printf("星期三\n", day);
//		break;
//	case 4:
//		printf("星期四\n", day);
//	case 5:
//		printf("星期五\n", day);
//	case 6:
//		printf("星期六\n", day);
//	case 7:
//		printf("星期七\n", day);
//	}
//
//	return 0;
//}



//switch语句
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//        {//switch允许嵌套使用
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



//while(表达式)
//	循环语句：



////在屏幕上打印1~10
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



//在屏幕上打印1~10
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
