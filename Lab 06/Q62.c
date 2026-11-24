#include<stdio.h>
int armstong(int n)
{
	int sum=0, q, pow, count=0, i, temp;
	temp=n;
	while(temp!=0)
	{
		temp/=10;
		count++;
	}
	temp=n;
	while(temp!=0)
	{
		q=temp%10;
		pow=1;
		for(i=0; i<count; i++)
		{
			pow*=q;
		}
		sum+=pow;
		temp/=10;
	}
	if(sum==n)
	{
		printf("Armstong Number");
	}
	else
	{
		printf("Not Armstong Number");
	}
}
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	armstong(num);
}
