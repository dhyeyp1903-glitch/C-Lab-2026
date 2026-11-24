#include<stdio.h>
int main()
{
	int a[10], i, j, temp, mi, n;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	printf("Enter Array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		mi = i;
		for(j=i+1; j<n; j++)
		{
			if(a[j] < a[mi])
			{
				mi = j;
			}
		}
		if(mi != i)
		{
			temp = a[i];
			a[i] = a[mi];
			a[mi] = temp;
		}
	}
	printf("\nSelection Sort Array: ");
	for(i=0; i<n; i++)
	{
		printf("\t%d", a[i]);
	}
}
