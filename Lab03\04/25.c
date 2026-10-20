#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter Your Number: ");
    scanf("%d", &n);

    printf("Multiplication Table Of %d:\n", n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
