//���continue
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



putchar��getchar
#include <stdio.h>
int main()
{
	int ch = getchar(); //����һ���ַ�

	putchar(ch); //���һ���ַ�
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


//��ȡ����
#include <stdio.h>
int main()
{
    int ret = 0;
    char password[20] = {0};
    printf("��������:>");
    scanf_s("%s",password,20); //�������룬�������password������
    printf("ȷ�ϣ�Y/N):>");
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



��ȡ���루�Ľ���
#include <stdio.h>
int main()
{
    int ret = 0;
    char password[20] = { 0 };
    printf("��������:>");
    scanf_s("%s", password, 20); //�������룬�������password������
    getchar(); //��ȡ�������е�\n
    printf("ȷ�ϣ�Y/N):>");
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



//��ȡ���루�ٴθĽ���
#include <stdio.h>
int main()
{
    int ret = 0;
    int ch = 0;
    char password[20] = { 0 };
    printf("��������:>");
    scanf_s("%s", password, 20); //�������룬�������password������
    while (ch = getchar() != '\n') //��ȡ�������е�\n
    {
        ; //ѭ���ڲ���Ҫ��ʲô������Ϊ�����
    }
    printf("ȷ�ϣ�Y/N):>");
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



//��ӡ�ַ�
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9') // ||����   ��0���͡�9�������ַ� 
            continue;
        putchar(ch);
    }
    return 0;
}



//��forѭ����ӡ1~10
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



//���break
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



//���continue
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



//forѭ��ʹ��ע���
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



//forѭ���ı���
#include <stdio.h>
int main()
{
	for ( ; ; )
	{
		printf("haha\n");
	}

	return 0;
}



forѭ���ı���
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




//����ѭ��Ҫѭ�����ٴΣ�
#include <stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;



do����while���
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




����n�Ľ׳�
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


//��while����
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











