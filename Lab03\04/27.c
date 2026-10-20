#include<stdio.h>
int main()
{
    int n,flag = 0,a;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    for(a=2; a<=n/2 && flag == 0; a++)
    {
        if(n % a == 0)
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf(" Not Prime Number");
    }
    return 0;
}