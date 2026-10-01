#include<stdio.h>
int main()
{
    float area, base, height;

    printf("enter your base of triangle in metres: ");
    scanf("%f", &base);

    printf("enter your height of triangle in metres: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Your Calculated Area Of Triangle:%f square metres", area);

    return 0;
}