#include<stdio.h>
int fact(int n)
{
	int f = 1, i;
	for(i = 1; i <=n; i++)
	{
		f *= i;
	}
	return f;
}
int main()
{
	int n, r;
	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);
	if(r > n)
	{
		printf("r cannot be greater");
		return 1;
	}
	int result = fact(n)/(fact(r)*fact(n-r));
	printf("Calculater NCR:%d", result);
}
