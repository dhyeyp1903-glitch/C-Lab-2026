#include<stdio.h>
int main()
{
	char name[20];
	int i=0;
	printf("Enter Name: ");
	gets(name);
	while(name[i] != '\0')
	{
		i++;
	}
	printf("Length Of String=%d", i);
}
