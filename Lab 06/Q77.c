#include<stdio.h>
#include<string.h>
int main()
{
	char st1[40], st2[40], st3[40];
	int len;
	printf("Enter String 1: ");
	gets(st1);
	len = strlen(st1);
	printf("Length Of Entered String: %d", len);
	strcpy(st2,st1);
	printf("\nCopied String 2: \n");
	puts(st2);
	printf("Enter Your Third String: ");
	gets(st3);
	strcat(st1,st3);
	printf("Concatinate String: \n");
	puts(st1);
	if(strcmp(st2,st3) == 0)
	{
		printf("String 2 And String 3 Are Equal");
	}
	else
	{
		printf("String 2 And String 3 Different Strings");
	}
	strrev(st3);
	printf("\nReverse Of String 3: \n");
	puts(st3);
}
