#include<stdio.h>
int main()
{
    int n, q, sum = 0, temp;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        q = n % 10;
        sum += q*q*q;
        n = n / 10;
    }
    if(sum == temp)
    {
        printf("Armstong Number");
    }
    else
    {
        printf("Not Armstong Number");
    }
    return 0;
}