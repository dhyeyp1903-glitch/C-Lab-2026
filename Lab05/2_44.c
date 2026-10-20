#include<stdio.h>
int main()
{
	int a[10], i, j, ocount = 0, ecount = 0;
	printf("Enter 10 Numbers: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	printf("\nTotal Number Of Even Numbers:%d", ecount);
	printf("\nTotal Number Of Odd Numbers:%d", ocount);
	return 0;
}
