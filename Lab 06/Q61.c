#include<stdio.h>
void palindrome(int num)
{
	int sum = 0, a, temp;
	temp = num;
	while(num != 0)
	{
		a = num % 10;
		sum = sum*10 + a;
		num = num /10; 
	}
	if(temp == sum)
	{
		printf("Pallindrome");
	}
	else
	{
		printf("Not Pallindrome");
	}
}
void main()
{
	int num;
	printf("Enter Your Number: ");
	scanf("%d", &num);
	palindrome(num);
}
