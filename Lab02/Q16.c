#include<stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 >= n2)
    {
        if(n1 >= n3)
        {
            printf("Maximum Number Is:%d", n1);
        }
        else
        {
            printf("Maximum Number Is:%d", n3);
        }
    }
    else
    {
        if(n2 >= n3)
        {
            printf("Maximum Number Is:%d", n2);
        }
        else
        {
            printf("Maximum Number Is:%d", n3);
        }
    }
    return 0;
} 