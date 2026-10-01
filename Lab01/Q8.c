#include<stdio.h>
int main()
{
    long totalseconds = 31558150;
    long days, hours, minutes, seconds;

    days = totalseconds / 86400;
    hours = (totalseconds % 86400) / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;

    printf("Earth Revolution Period:%ld", totalseconds);
    printf("\nConversion:%ld days, %ld hours, %ld minutes, %ld seconds", days, hours, minutes, seconds);
    return 0;
}