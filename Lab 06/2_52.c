#include<stdio.h>
int main()
{
	int a[3][3], max, min, i, j;
	printf("Enter 3*3 Matrix: ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	max = a[1][1];
	min = a[1][2];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
			if(a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	printf("Maximum Element:%d", max);
	printf("\nMinimum Element:%d", min);
	return 0;
}
