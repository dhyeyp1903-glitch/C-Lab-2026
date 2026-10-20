#include<stdio.h>
int main()
{
	int i, a[i], max, smax, n;
	printf("Enter Your Size Of Array: ");
	scanf("%d", &n);
	printf("Enter Array Elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	} 
	max = a[0];
	smax = a[1];
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			smax = max;
			max = a[i];
		}
		if(a[i] > smax && a[i] != max)
		{
			smax = a[i];
		}
	}
	printf("Max Number=%d", max);
	printf("\nSecond Max Number=%d", smax);
	return 0;
}
