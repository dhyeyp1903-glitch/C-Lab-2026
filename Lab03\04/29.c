#include<stdio.h>
int main()
{
    int num,r,sum = 0, c = 0;
    printf("Enter Your Number: ");
    scanf("%d", &num);
    c = num;
    while( num != 0)
    {
        r = num % 10;
        sum = sum * 10+ r;
        num = num / 10;
    }    
        if(c == sum)
        {
            printf("%d Is Pallindrom", c);
        }
        else
        {
            printf("%d Is Not Pallindrom", c);
        }
    
    return 0;
}