#include<stdio.h>
void evenorodd(int num)
{
	if(num % 2 == 0)
	{
		printf("Even Number");
	}
	else
	{
		printf("Odd Number");
	}
}
void main()
{
	int n;
	printf("Enter Your Number: ");
	scanf("%d", &n);
	evenorodd(n);
}
