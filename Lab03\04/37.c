#include<stdio.h>
int main()
{
    int i, n;
	printf("Enter The Limit N: ");
    scanf("%d", &n);
	printf("Sequence Is:");
    for(i = 2; i <= n; i += 2)
    {
        printf("%d", i);
        if (i + 2 <= n)
        {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
