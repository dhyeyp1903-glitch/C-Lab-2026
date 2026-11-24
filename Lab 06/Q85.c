#include<stdio.h>
int main()
{
	char st[20], char1, char2;
	int i=0;
	printf("Enter Your String: ");
	fgets(st, sizeof(st), stdin);
	printf("Enter Character You Want To Delete: ");
	scanf("%c", &char1);
	printf("Enter Character You Want To Replace: ");
	scanf(" %c", &char2);
	while(st[i] != '\0')
	{
		if(char1==st[i])
		{
			st[i] = char2;
		}
		i++;
	}
	printf("Modified String: ");
	fputs(st, stdout);
}
