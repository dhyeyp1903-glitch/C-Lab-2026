#include<stdio.h>
int main()
{
	int a[10], i, n, ls, count = 0;
	printf("Enter Your Limit: ");
	scanf("%d", &n);
	printf("Enter Your Array: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter Element To Target: ");
	scanf("%d", &ls);
	for(i = 0; i < n; i++)
	{
		if(ls == a[i])
		{
			count ++;
		}
	}
	printf("%d Occuring %d Times", ls, count);
	return 0;
}
