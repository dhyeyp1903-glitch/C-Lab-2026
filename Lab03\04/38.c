#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Your Limit Here: ");
    scanf("%d", &n);

    printf("Your Sequence Here: ");
    for( i = 1; i <= n; i++)
    {
        printf("%d", i * i);
        if(i + 1 <= n)
        {
            printf(", ");
        }
    }
    return 0;
}