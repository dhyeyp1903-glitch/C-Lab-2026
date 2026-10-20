#include<stdio.h>
int main()
{
	int num,sum=0;
    while(num >= 0)
    {
    	printf("Enter Negative Number To Stop: ");
    	scanf("%d", &num);
		sum = sum + num;
	}
	printf("Your Required Sum = %d", sum);
}
