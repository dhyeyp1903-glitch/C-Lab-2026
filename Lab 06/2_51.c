#include<stdio.h>
int main()
{
	int a[20], n, i, temp;
	printf("Enter Limit: ");
	scanf("%d", &n);
	printf("Enter An Array: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Original Array: ");
	printf("\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	for(i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
	printf("\nReversed Array: ");
	printf("\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
