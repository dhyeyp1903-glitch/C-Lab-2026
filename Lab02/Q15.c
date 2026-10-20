#include<stdio.h>
int main()
{
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter Marks of 5 Subjects out of 100 each: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total/5;

    printf("Your Total Marks:%f", total);
    printf("\nYour Total Percentage:%f\n", percentage);

    if(percentage >= 60)
    {
        printf("First Division");
    }
    else if(percentage >= 45)
    {
        printf("Second Division");
    }
    else if(percentage >= 30)
    {
        printf("Third Division");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
