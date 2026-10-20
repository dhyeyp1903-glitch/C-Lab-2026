#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter Your Limit Here: ");
    scanf("%d", &n);

    printf("Sequence Is:");
    for(i = 1; i <= n; i += 2)
    {
        printf("%d", i);
        if ( i + 2 <= n)
        {
            printf(", ");
        }
    }
    return 0;
}
