#include<stdio.h>
int main()
{
	char target, st[30];
	int i = 0, flag = 0;
	printf("Enter Your String: ");
	gets(st);
	printf("Enter Character To Search: ");
	scanf("%c", &target);
	while(st[i] != '\0')
	{
		if(target == st[i])
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	if(flag==1)
	{
		printf("Character Present");
	}
	else
	{
		printf("Character Not Present");
	}
}
