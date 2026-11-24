#include<stdio.h>
int main()
{
	char st[20];
	int i=0;
	printf("Enter Your Name: ");
	fgets(st, sizeof(st), stdin);
	printf("List Of ASCII Characters:\n");
	while(st[i] != '\0' && st[i] != '\n')
	{
		printf("%d\n", st[i]);
		i++;
	}
}
