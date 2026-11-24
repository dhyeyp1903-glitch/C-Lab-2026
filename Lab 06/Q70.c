#include<stdio.h>
void vowel(char a)
{
	switch(a)
	{
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' :
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :	printf("Vowel");
		break;
		default : 	printf("No Vowel");
	}
}
int main()
{
	char ch;
	printf("Enter Your Character: ");
	scanf("%c", &ch);
	vowel(ch);
	return 0;	
}
