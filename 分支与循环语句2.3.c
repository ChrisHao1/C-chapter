////����n���׳�
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



////����1!+2!+����+10!�׳˵ĺ�
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
//			ret = ret * i; //�����retΪn�Ľ׳�
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



////����1!+2!+����+10!�׳˵ĺ�(�Ż���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n; //�����retΪn�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}




//��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0]
//<= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�Ż�
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
//	int left = 0;//����һ�����±�
//	int right = sz - 1;//����һ�����±�
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//�����㷨 �ҳ��м���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}



//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <stdio.h>
//#include <string.h>//����strlenʱ�õĿ��ļ�
//#include <windows.h>//����sleep����ʱ�õĿ��ļ�
//#include <stdlib.h>//����system����ʱ�õĿ��ļ�
//
//int main()
//{
//	char arr1[] = "We Can To Be A Superman";
//	char arr2[] = "#######################";
//	int left = 0;
//	//����һ���Ƚ��鷳����int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//Ϊʲô�Ǽ����أ��������������һ��Ĭ�ϵ�\0�����ֻ��1�Ļ����õ�����\0���±꣬����Ҫ��2
//	int right = strlen(arr1) - 1;//strlen()�������ַ������ȣ�����\0��ֹͣ��������\0���±����Ǳ�Ԫ�ظ���Сһ
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ÿ��ӡһ��ͣ��1000ms
//		system("cls");//ִ��ϵͳ�����һ������    cls�������������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//
//	return 0;
//}



////��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ,����ʾ��¼�ɣ�������ξ�����������˳�����
//#include <stdio.h>
//#include <string.h>//����strcmpʱ�õĿ��ļ�
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf_s("%s",password,20);//��vs2019���뻷���� ��Ҫ��20����������д�ڱ���������
//		if (strcmp(password,"123456") == 0)//==�����õ�������ʾ�����ַ����Ƿ���� Ҫʹ�ÿ⺯��strcmp password��123456���ʱ������0
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���ζ�����ʧ�ܣ����˳�ϵͳ\n");
//	}
//
//	return 0;
//}
