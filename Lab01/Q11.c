#include<stdio.h>
int main()
{
    int ts, hrs, mins, secs;

    printf("Enter Time In Total Seconds Here: ");
    scanf("%d", &ts);

    hrs = ts / 3600;
    mins = (ts % 3600) / 60;
    secs = ts % 60;

    printf("Your Actual Time is : %d:%d:%d", hrs, mins, secs);

    return 0;
}