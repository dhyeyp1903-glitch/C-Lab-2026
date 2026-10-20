#include<stdio.h>
int main()
{
 int n1, n2, calc, result;
 printf("Enter 1 For Addition, 2 For Subtraction, 3 For Multiplication, 4 For Division.");
 printf("\nEnter Two Numbers: ");
 scanf("%d %d", &n1, &n2);
 printf("Enter Number Given For Specific Operation: ");
 scanf("%d", &calc);
 switch(calc)
 {
    case 1: result = n1 + n2;
            printf("Your Otput Is: %d", result);
            break;
    case 2: result = n1 - n2;
            printf("Your Otput Is: %d", result);
            break;
    case 3: result = n1 * n2;
            printf("Your Otput Is: %d", result);
            break;
    case 4: if(n2 != 0)
            {
                result = n1 / n2;
                 printf("Your Otput Is: %d", result);
            }
            else
            {
                printf("Can't Divide By Zero");
            }
            break;
    default : printf("Invalid Input");        
 }
 return 0;
}