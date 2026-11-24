#include<stdio.h>
int main()
{
	int a[10], i, j, n, tamp;
	printf("Enter The Size Of Array upto 10: ");
	scanf("%d", &n);
	printf("Enter Array Elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				tamp = a[j];
				a[j] = a[j+1];
				a[j+1] = tamp;
			}
		}
	}
	printf("\nAfter Sorting Elements Array Is:\n ");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
