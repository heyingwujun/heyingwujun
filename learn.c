#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//type_t arr name
int main()
{
	char arr[] = "abcdef";
	int i = 0;
	for (i = 0;i < strlen(arr); i++)
	{
		printf("%c ", arr[i]);
	}

	return 0;
}





//int main()
//{
//	char a = 1;
//	char arr[] = "abcdef";//定义数组不能使用变量，使用的时候可以
//	a = arr[3];
//	printf("%c\n", a);
//	int i = 0;
//	for (i = 0;i < 7; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//a b c \0 sizeof=4 strlen=3
// a b c   sizeof=3 strlen=c后没有\0，随机值


//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = {0};//数组整型,不完全初始化，剩下的元素默认为0
//	char arr1[5] = { 'a','b' };//数组字符
//	char arr2[5] = "ab";
//	char arr3[] = "abcdef";
//	printf("%d\n",sizeof(arr3));//答案7 sizeof计算arr3所占空间大小，七个元素是7
//	printf("%d\n",strlen(arr3));//答案6 strlen求字符串的长度 a b c d e f \0 求字符串长度'\0'之前的字符
//	//const int n = 5;
//	//printf("%d\n", arr[n]);
//	return 0;
//}
//strlen只能针对字符串的长度
//sizeof计算变量、数组、类型的大小-单位是字节

//#include<stdio.h>
//#include<string.h>//库函数
//
//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct book b1 = { "C语言程序设计",55};//利用结构体类型-创建一个该类型的结构体变量
//	strcpy(b1.name, "c++");//strcpy-string copy-字符串拷贝-库函数
//
//	printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	//b1.price = 15;
//	//	printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//};


//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0;i < 5;i++)//for语句主要用来控制循环语句，i=0是初始状态，i<3是循环条件，i++是执行完循环体
//		printf("%d\n", sum(a));
//}