#include<stdio.h>
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
	printf("Reverse Of String:");
	puts(b);
}
