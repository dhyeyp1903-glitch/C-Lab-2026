#include<stdio.h>
int main()
{
    int i, N, esum = 0, osum = 0;
    printf("Enter Your Limit For N here: ");
    scanf("%d", &N);
    
    for(i = 1; i <= N; i ++)
    {
        if(i % 2 == 0)
        {
            esum = esum + i;
        }
        else
        {
            osum = osum + i;
        }
    }
    printf("Sum Of Even Numbers Till %d is: %d", N, esum);
    printf("\nSum Of Odd Numbers Till %d is: %d", N, osum);
    return 0;
}
