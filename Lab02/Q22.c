#include<stdio.h>
int main()
{
    int i, n, factorial = 1;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter Valid Integers");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial Of %d is: %d", n, factorial);
    }
return 0;
}
