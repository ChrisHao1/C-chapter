////结构体
//#include <stdio.h>
//struct Book //结构初始化
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C Primer Plus",55 };
//	printf("书名:%s\n",b1.name);
//	printf("价格:%d元\n",b1.price);
//
//	b1.price = 66; 但是数组不可以 这样写错误：b1.name = 'C++'
//	printf("修改后的价格：%d\n",b1.price);
//
//	return 0;
//}



//运用指针
#include <stdio.h>
struct Book //结构初始化
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C Primer Plus",55 };
	struct Book* pb = &b1;
	//printf("%s\n", (*pb).name); //运用指针
	//printf("%d\n", (*pb).price);

	printf("%s\n", pb->name); //运用指针 pb指向b1中的name
	printf("%d\n", pb->price);


	return 0;
}