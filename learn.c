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
//	char arr[] = "abcdef";//�������鲻��ʹ�ñ�����ʹ�õ�ʱ�����
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
// a b c   sizeof=3 strlen=c��û��\0�����ֵ


//int main()
//{
//	//����һ������-�������-10��
//	int arr[10] = {0};//��������,����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//	char arr1[5] = { 'a','b' };//�����ַ�
//	char arr2[5] = "ab";
//	char arr3[] = "abcdef";
//	printf("%d\n",sizeof(arr3));//��7 sizeof����arr3��ռ�ռ��С���߸�Ԫ����7
//	printf("%d\n",strlen(arr3));//��6 strlen���ַ����ĳ��� a b c d e f \0 ���ַ�������'\0'֮ǰ���ַ�
//	//const int n = 5;
//	//printf("%d\n", arr[n]);
//	return 0;
//}
//strlenֻ������ַ����ĳ���
//sizeof������������顢���͵Ĵ�С-��λ���ֽ�

//#include<stdio.h>
//#include<string.h>//�⺯��
//
//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct book b1 = { "C���Գ������",55};//���ýṹ������-����һ�������͵Ľṹ�����
//	strcpy(b1.name, "c++");//strcpy-string copy-�ַ�������-�⺯��
//
//	printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	//b1.price = 15;
//	//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
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
//	for (i = 0;i < 5;i++)//for�����Ҫ��������ѭ����䣬i=0�ǳ�ʼ״̬��i<3��ѭ��������i++��ִ����ѭ����
//		printf("%d\n", sum(a));
//}