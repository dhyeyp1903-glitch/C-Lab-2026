#include<stdio.h>
int main()
{
    char c;

    printf("Enter Your Character: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
    {
        printf("%c Is Capital Letter", c);
    }
    else if(c >= 'a' && c <= 'z')
    {
        printf("%c Is Small Letter", c);
    }
    else if(c >= '0' && c <= '9')
    {
        printf("%c Is Digit", c);
    }
    else
    {
        printf("%c Is Special Character", c);
    }

    return 0;
}