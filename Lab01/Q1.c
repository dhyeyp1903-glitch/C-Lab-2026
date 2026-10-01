#include<stdio.h>
int main()
{
    float p, r, t, i;

    printf("Enter Your Principal Amount Here: ");
    scanf("%f", &p);

    printf("Enter Your Rate Of Interest Here: ");
    scanf("%f", &r);

    printf("Enter Your Time Period Here: ");
    scanf("%f", &t);

    i = (p * r * t) / 100;

    printf("Calculated Simple Interest = %f", i);

    return 0;

}