#include<stdio.h>
int main()
{
    char c;

    printf("Enter Your Character: ");
    scanf("%c", &c);

    (c >= 'a' && c <= 'z')
    ? printf("%c is small case letter", c)
    : printf("%c is not small case letter", c);

    return 0;
}