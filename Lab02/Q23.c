#include<stdio.h>
int main()
{
    int i,b,e,result = 1;
    printf("Enter Base And Exponent: ");
    scanf("%d %d", &b, &e);
    for(i=1; i<=e; i++)
    {
        result = result * b;
    }
    printf("%d raised to %d=%d", b, e, result);
    return 0;
}
