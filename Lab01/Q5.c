#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter Your First Variable a: ");
    scanf("%d", &a);

    printf("Enter Your Second  b: ");
    scanf("%d", &b);

    printf("Initially a = %d and b = %d", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nNow a = %d and b = %d", a, b);

    return 0;
}
