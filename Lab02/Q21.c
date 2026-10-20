#include<stdio.h>
int main()
{
    int n1, n2, ans;
    char arith;
    printf("Enter Arithmetic Operator(+,-,*,/): ");
    scanf("%c", &arith);
    printf("Enter Two Numbers: ");
    scanf("%d %d", &n1, &n2);
    switch(arith)
    {
        case '+': ans = n1 + n2;
                printf("Your Result Is:%d", ans);
                break;
        case '-': ans = n1 - n2;
                printf("Your Result Is:%d", ans);
                break;
        case '*': ans = n1 * n2;
                printf("Your Result Is:%d", ans);
                break;
        case '/': if(n2 != 0)
                  {
                    ans = n1 / n2;
                    printf("Your Result Is:%d", ans);
                  }   
                  else
                  {
                    printf("Can't Divide By 0");
                  }  
                  break;
        default : printf("Invalid Input Or Not In Provided Input List");                   
    }
    return 0;
}