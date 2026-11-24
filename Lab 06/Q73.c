#include<stdio.h>
int main()
{
	char a[20], b[20];
	int i = 0;
	printf("Enter Your First String: ");
	gets(a);
	while(a[i] != '\0')
	{
		b[i] = a[i];
		i++;
	}
	b[i+1] = '\0';
	printf("Copied String 2: \n");
	puts(b);
}
