//添加continue
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}

	return 0;
}



putchar和getchar
#include <stdio.h>
int main()
{
	int ch = getchar(); //接收一个字符

	putchar(ch); //输出一个字符
	printf("%c\n", ch);

	return  0;
}



EOF
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}


//读取密码
#include <stdio.h>
int main()
{
    int ret = 0;
    char password[20] = {0};
    printf("输入密码:>");
    scanf_s("%s",password,20); //输入密码，并存放在password数组中
    printf("确认（Y/N):>");
    ret = getchar();
    if (ret == 'Y')
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}



读取密码（改进）
#include <stdio.h>
int main()
{
    int ret = 0;
    char password[20] = { 0 };
    printf("输入密码:>");
    scanf_s("%s", password, 20); //输入密码，并存放在password数组中
    getchar(); //读取缓冲器中的\n
    printf("确认（Y/N):>");
    ret = getchar();
    if (ret == 'Y')
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}



//读取密码（再次改进）
#include <stdio.h>
int main()
{
    int ret = 0;
    int ch = 0;
    char password[20] = { 0 };
    printf("输入密码:>");
    scanf_s("%s", password, 20); //输入密码，并存放在password数组中
    while (ch = getchar() != '\n') //读取缓冲器中的\n
    {
        ; //循环内不需要做什么，所以为空语句
    }
    printf("确认（Y/N):>");
    ret = getchar();
    if (ret == 'Y')
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}



//打印字符
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9') // ||或者   ‘0’和‘9’代表字符 
            continue;
        putchar(ch);
    }
    return 0;
}



//用for循环打印1~10
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}



//添加break
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}



//添加continue
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}



//for循环使用注意点
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i = 5)
		{
			printf("haha\n");
		}
		printf("hehe\n");
	}

	return 0;
}



//for循环的变种
#include <stdio.h>
int main()
{
	for ( ; ; )
	{
		printf("haha\n");
	}

	return 0;
}



for循环的变种
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("haha\n");
		}
	}

	return 0;
}



#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("haha\n");
		}
	}

	return 0;
}


#include <stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
return 0;
}




//请问循环要循环多少次？
#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;



do……while语句
#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d",i);
		i++;
	} 
	while (i <= 10);

	return 0;
}


#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	while (i <= 10);

	return 0;
}



#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}
	while (i <= 10);

	return 0;
}




计算n的阶乘
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);

	return 0;
}


//用while进行
#include <stdio.h>
int main()
{
	int i = 1;
	int n = 1;
	int res = 1;
	scanf_s("%d", &n);
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	printf("res =%d\n", res);

	return 0;
}











