#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2; i<=n/2; i++)
	{
		if(n%i!=0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	printf("%d is %d as argument", num, prime(num));
}
