#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char arr[20] = {0};
	gets(arr);
	int l = strlen(arr);
		for (i = 0; i < l; i++)
	{
			if (arr[i] >= 65 && arr[i] <= 90)
			{
				arr[i] = arr[i] + 32; // ��д��Сд
				continue;  //ֻҪ�ı�������������ѭ��
			}
			if (arr[i] >= 97 && arr[i] <= 122)
			{
				arr[i] = arr[i] - 32;//Сд���д
				continue;
			}
	}
	puts(arr);
	return 0;
}