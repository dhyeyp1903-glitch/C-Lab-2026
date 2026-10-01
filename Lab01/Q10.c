#include<stdio.h>
int main()
{
    float M, P, C, E;
    float CM;

    printf("Enter Your PCM Marks Out of 200: ");
    scanf("%f %f %f", &M, &P, &C);

    printf("Enter Your Entrance Exam Marks Out Of 100: ");
    scanf("%f", &E);

    CM = M/2 + P/2 + C/2 + E;
    printf("Your Cutoff Marks will be: %f", CM);

    return 0;
}