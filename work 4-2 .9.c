#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  // ��׳�
	int sum = 0,x=1;
	int i = 0;
	int t = 0;
	scanf("%d", &t);
	putchar('\n');
	for (i=1;i<=t;i++)
	{
		
		int j=0;
		for (j = 1; j <= i; j++)
		{
			x*= j; // n!
		}
		sum += x; // ÿ���������n!���ϼӵ�sum
		x = 1; // ÿ������n!�ȹ�1���ٴ�n*(n-1)����2*1
	}
	printf("%d\n", sum);
	return 0;
}