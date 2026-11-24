#include<stdio.h>
int fib(int n)
{
	int t1 = 0, t2 = 1, nt, i;
	printf("First %d Fibonacci Terms: ", n);
	for(i=1; i<=n; i++)
	{
		nt = t1 + t2;
		t2 = t1;
		printf("%d\t", t2);
		t1 = nt;
	}
}
int main()
{
	int n;
	printf("Enter Limit: ");
	scanf("%d", &n);
	fib(n);
}
