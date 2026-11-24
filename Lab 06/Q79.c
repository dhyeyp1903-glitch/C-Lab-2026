#include<stdio.h>
int main()
{
	char name[20];
	int i = 0, count = 0;
	printf("Enter String: ");
	gets(name);
	while(name[i] != '\0')
	{
		switch(name[i])
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': count++;
		}
		i++;
	}
	printf("Vowel Count=%d", count);
}
