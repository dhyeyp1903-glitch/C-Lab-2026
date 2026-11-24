#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20];
	int j = 0, i = 0;
	printf("Enter String: ");
	gets(a);
	while(a[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while(i>=0)
	{
		b[j] = a[i];
		j++;
		i--;
	}
	b[j] = '\0';
	if(strcmp(a,b) == 0)
	{
		printf("Pallindrome");
	}
	else
	{
		printf("Not Pallindrome");
	}
}
