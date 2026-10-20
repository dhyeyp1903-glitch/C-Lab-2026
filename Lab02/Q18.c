#include<stdio.h>
int main()
{
    int n1, n2, n3, max;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

    printf("maximum number is:%d", max);
    return 0;
}