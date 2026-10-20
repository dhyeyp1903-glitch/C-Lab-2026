#include<stdio.h>
int main()
{
    float sum = 0, fact = 1;
    int n, i;
    printf("Enter Your Limit Here: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (float)i/fact;
    }
    printf("Sum Of series Upto Your Limit: %f", sum);
    return 0;
}