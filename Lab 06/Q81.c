#include<stdio.h>
int main()
{
	char name[100];
	int i=0, ucount=0, lcount=0, scount=0, dcount=0;
	printf("Enter String: ");
	gets(name);
	while(name[i]!='\0')
	{
		if(name[i]>='A' && name[i]<='Z')
		{
			ucount++;
		}
		else if(name[i]>='a' && name[i]<='z')
		{
			lcount++;
		}
		else if(name[i]>='0' && name[i]<='9')
		{
			dcount++;
		}
		else
		{
			scount++;
		}
		i++;
	}
	printf("Upper Case Count:%d\n", ucount);
	printf("Lower Case Count:%d\n", lcount);
	printf("Digit Case Count:%d\n", dcount);
	printf("Special Case Count:%d\n", scount);
}
