#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	putchar('\n');
	int i = 0,t=x ;

	for (i = 2; i < x / 2; i++)
	{
		if ((t / i) % i == 0)
		{
			printf("%d ", i);
		}
		else t /= i;
	}

	return 0;
}