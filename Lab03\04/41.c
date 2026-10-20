#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Your Number: ");
	scanf("%d", &n);
    printf("Factors of %d are:", n);
	for(i=n; i>=1; i--)
	{
		if(n % i == 0)
		{
			printf("\n%d", i);
		}
	}
	return 0;
}