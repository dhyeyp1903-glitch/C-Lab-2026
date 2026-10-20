#include<stdio.h>
int main()
{
    float s, c;
    printf("Enter Your Sales Here: ");
    scanf("%f", &s);
    if(s > 0 && s <= 500)
    {
        c = 0.05 * s;
    }
    else if(s > 500 && s <= 2000)
    {
        c = 35 + ((s - 500) * 0.10);
    }
    else if(s > 2000 && s <= 5000)
    {
        c = 185 + ((s - 2000) * 0.12);
    }
    else if(s > 5000)
    {
        c = s * 0.125;
    }
    else
    {
        printf("Invalid Input For Sales");
        return 1;
    }
    printf("Your Commission Is: %f", c);
    return 0;
}