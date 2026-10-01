#include<stdio.h>
int main()
{
    float farenhit, centigrade;

    printf("Enter Temperature In Farenhit: ");
    scanf("%f", &farenhit);

    centigrade = (farenhit - 32) * 5/9;
    printf("%f centigrade", centigrade);

    return 0;
}