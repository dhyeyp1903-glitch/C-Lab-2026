#include<stdio.h>
int main()
{
	int i, a[i], max, min, n;
	printf("Enter Your Size Of Array: ");
	scanf("%d", &n);
	printf("Enter Array Elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	} 
	max = a[0];
	min = a[1];
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	printf("Max Number=%d", max);
	printf("\nMin Number=%d", min);
	return 0;
}
