#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;

   printf("enter marks of subject 1 here: ");
   scanf("%d", &m1);

   printf("enter marks of subject 2 here: ");
   scanf("%d", &m2);

   printf("enter marks of subject 3 here: ");
   scanf("%d", &m3);

   printf("enter marks of subject 4 here: ");
   scanf("%d", &m4);

   printf("enter marks of subject 5 here: ");
   scanf("%d", &m5);

   total = m1 + m2 + m3 + m4 + m5;
   percentage = total / 5;

   printf("your total marks are = %d", total);
   printf("\nyour percentage = %f", percentage);

   return 0;

}
