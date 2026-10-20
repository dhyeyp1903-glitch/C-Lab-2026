#include<stdio.h>
int main()
{
    int n, s, a;
    printf("Enter Positive Number: ");
    scanf("%d", &n);
    do
    {
        s = 0;
        do
        {
            a = n % 10;
            s = s + a;
            n = n / 10;
        } while (n!=0);

        n = s;
    } while (n >= 10);
    
    printf("Sum Of Digits In Single Digit=%d", n);
    return 0;
}