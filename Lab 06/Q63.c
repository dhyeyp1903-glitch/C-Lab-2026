#include<stdio.h>
void swap(int *x, int *y)
{
	int tamp;
	tamp = *x;
	*x = *y;
	*y = tamp;
}
int main()
{
	int x, y;
	printf("Enter X and Y : ");
	scanf("%d %d", &x, &y);
	printf("Before Swap X=%d And Y=%d", x, y);
	swap(&x,&y);
	printf("\nAfter Swap X=%d And Y=%d", x, y);
}
