#include<stdio.h>
int main()
{
    float cu, rc;
    printf("Enter Your Consumed Units Here: ");
    scanf("%f", &cu);
    if(cu >= 0 && cu <= 200)
    {
        rc = 0.50 * cu;
    }
    else if(cu > 200 && cu <= 400)
    {
        rc = 100 + ((cu - 200) * 0.65);
    }
    else if(cu > 400 && cu <= 600)
    {
        rc = 230 + ((cu - 400) * 0.80);
    }
    else if(cu > 600)
    {
        rc = 425 + ((cu - 600) * 1.25);
    }
    else
    {
        printf("Invalid Input");
        return 1;
    }
    printf("Your Payable Amount:%f", rc);
    return 0;
}