#include<stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nt;
    printf("Enter Your Number Of Terms: ");
    scanf("%d", &n);
    printf("Fibbonacci Series: ");
    for(i = 1; i <= n; ++i)
    {
        printf("%d", t1);
        if(i < n)
        {
            printf(", ");
        }
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    printf("\n");
    return 0;
}