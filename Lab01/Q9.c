#include<stdio.h>
int main()
{
    int hours, mins, seconds, totalseconds;

    printf("Enter Your Hour Duration In Hours: ");
    scanf("%d", &hours);

    printf("Enter Your Minute Duration In Mins: ");
    scanf("%d", &mins);

    printf("Enter Your Second Duration In Seconds: ");
    scanf("%d", &seconds);

    totalseconds = (hours * 3600) + (mins * 60) + (seconds * 1);
    printf("Actual Time In Seconds:%d seconds", totalseconds);

    return 0;
}
