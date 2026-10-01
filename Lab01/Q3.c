#include<stdio.h>
int main()
{
    float basic, da, hra, gross;

    printf("Enter Your Basic Salary Here: ");
    scanf("%f", &basic);

    da = basic * 0.20;
    hra = basic * 0.10;
    gross = basic + da + hra;

    printf("Your Gross Salary Is: %f", gross);
    
    return 0;
}