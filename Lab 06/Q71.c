#include<stdio.h>
int stringlen(char a[100])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char lot[100];
	printf("Enter Your Line Of Text: ");
	gets(lot);
	int result = stringlen(lot);
	printf("Length Of String=%d", result); 
}
