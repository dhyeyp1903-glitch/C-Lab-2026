#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], i, j;
	printf("Enter Your 3 * 3 matrix: ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	printf("Your Given Matrix: ");
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\nTranspose Of Your Given Matrix: ");
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d", b[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
