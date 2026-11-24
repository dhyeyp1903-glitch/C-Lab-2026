#include<stdio.h>
int main()
{
	int a[10], b[10], c[10], i, j;
	printf("Enter Array A Of 10 Elements: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
    }
	printf("Enter Array B Of 10 Elements: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
    }
    for(i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
    }
    printf("Your Given A Array Is: ");
    printf("\n");
    for(i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
		printf(" ");
    }
    printf("\nYour Given B Array Is: ");
    printf("\n");
    for(i = 0; i < 10; i++)
	{
		printf("%d", b[i]);
		printf(" ");
    }
    printf("\nSum Of Your Given A and B Array Is: ");
    printf("\n");
    for(i = 0; i < 10; i++)
	{
		printf("%d", c[i]);
		printf(" ");
    }
    return 0;
}
