////�ṹ��
//#include <stdio.h>
//struct Book //�ṹ��ʼ��
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C Primer Plus",55 };
//	printf("����:%s\n",b1.name);
//	printf("�۸�:%dԪ\n",b1.price);
//
//	b1.price = 66; �������鲻���� ����д����b1.name = 'C++'
//	printf("�޸ĺ�ļ۸�%d\n",b1.price);
//
//	return 0;
//}



//����ָ��
#include <stdio.h>
struct Book //�ṹ��ʼ��
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C Primer Plus",55 };
	struct Book* pb = &b1;
	//printf("%s\n", (*pb).name); //����ָ��
	//printf("%d\n", (*pb).price);

	printf("%s\n", pb->name); //����ָ�� pbָ��b1�е�name
	printf("%d\n", pb->price);


	return 0;
}