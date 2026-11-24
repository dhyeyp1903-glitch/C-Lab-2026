#include<stdio.h>
int main()
{
	char name[20];
	int i = 0;
	printf("Enter String: ");
	gets(name);
	while(name[i] != '\0')
	{
		if(name[i] >= 'a' && name[i] <= 'z')
		{
			name[i] -= 32;
		}
		i++;
	}
	printf("\nUpper Case:");
	puts(name);
}
