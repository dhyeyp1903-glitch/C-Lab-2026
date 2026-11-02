#include<stdio.h>
int main()
{
	int temp, num, sum=0, q, n=0, i;
	printf("Enter Number: ");
	scanf("%d", &num);
	temp = num;
	while(temp!=0)
	{
		temp /= 10;
		n++;
	}
	temp = num;
	while(temp!=0)
	{
		q=temp%10;
		int pow=1;
		for(i=0; i<n; i++)
		{
			pow*=q;
		}
		sum+=pow;
		temp/=10;
	}
	if(sum==num)
	{
		printf("Armstong Number");
	}
	else
	{
		printf("Not Armstong Number");
	}
	return 0;
}
