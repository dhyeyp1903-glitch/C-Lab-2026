#include<stdio.h>
int maxofarray(int a[10], int arrsize)
{
	int i, max;
	max = a[0];
	for(i=0; i<arrsize; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int main()
{
	int a[10], n, result, i;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	printf("Enter Your Array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	result = maxofarray(a, n);
	printf("Max=%d", result);
}
