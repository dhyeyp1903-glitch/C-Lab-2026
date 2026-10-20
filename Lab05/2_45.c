#include<stdio.h>
int main()
{
	int a[10], i, j, pcount = 0, ncount = 0, zcount = 0;
	printf("Enter 10 Numbers: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] < 0)
		{
			ncount++;
		}
		else if(a[i] > 0)
		{
			pcount++;
		}
		else
		{
			zcount++;
		}
	}
	printf("\nTotal Number Of Positive Numbers:%d", pcount);
	printf("\nTotal Number Of Negative Numbers:%d", ncount);
	printf("\nTotal Number Of Zero Numbers:%d", zcount);
	return 0;
}
