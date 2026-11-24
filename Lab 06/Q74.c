#include<stdio.h>
int main()
{
	char a[20], b[20], c[20];
	int i = 0, j = 0;
	printf("Enter First Name: ");
	gets(a);
	printf("Enter Second Name: ");
	gets(b);
	while(a[i] != '\0')
	{
		c[j] = a[i];
		i++;
		j++;
	}
	c[j] = ' ';
	i = 0;
	j = j + 1;
	while(b[i] != '\0')
	{
		c[j] = b[i];
		j++;
		i++;
	}
	c[j] = '\0';
	printf("Concatinate Array: ");
	puts(c);
}
