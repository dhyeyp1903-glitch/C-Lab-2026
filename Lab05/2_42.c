#include<stdio.h>
int main()
{
	int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4-i; j++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(j=i-1; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(j=4-i; j>0; j--)
		{
			printf("*");
		}
		for(j=3-i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}