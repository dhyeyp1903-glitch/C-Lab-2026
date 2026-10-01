#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter Variable a: ");
    scanf("%d", &a);

    printf("Enter Variable b: ");
    scanf("%d", &b);

    printf("Initially a = %d and b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nNow a = %d and b = %d", a, b);

    return 0;
}
