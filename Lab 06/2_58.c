#include<stdio.h>
int main()
{
	int a[10], i, n, ls, loc, flag = 0;
	printf("Enter Your Limit: ");
	scanf("%d", &n);
	printf("Enter Your Array: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter Element To Search: ");
	scanf("%d", &ls);
	for(i = 0; i < n && flag == 0; i++)
	{
		if(ls == a[i])
		{
			loc = i + 1;
			flag = 1;
		}
	}
	if(flag == 1)
	{
		printf("%d is present on %d position", ls, loc);
	}
	else
	{
		printf("%d not found!!!", ls);
	}
	return 0;
}
