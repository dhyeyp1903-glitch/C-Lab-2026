#include<stdio.h>
int main()
{
	char st1[50], st2[50];
	int i=0, flag=0;
	printf("Enter String1: ");
	gets(st1);
	printf("Enter String2: ");
	gets(st2);
	while(st1[i]!='\0' || st2!='\0')
	{
		if(st1[i]!=st2[i])
		{
			flag=st1[i]-st2[i];
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("Equal Strings");
	}
	else if(flag)
	{
		printf("Different Strings");
	}
}
