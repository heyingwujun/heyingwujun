#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble_sort(int arr[], int n)
{
	int i = 0;
	for (i = 0;i < n - 1;i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0;j < n - 1 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
}
	int main()
 {
		int arr[] = { 8,9,7,4,3,2,1,5,10,6,5,3,5 };
		int i = 0;
		int n = sizeof(arr) / sizeof(arr[0]);
		bubble_sort(arr, n);
		for (i = 0;i < n;i++)
		{
			printf("A%d=%d\t", i + 1, arr[i]);
		}
		return 0;
}



