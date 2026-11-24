#include<stdio.h>
int main()
{
	char name[100];
	int i=0, ccount=0, wcount=1;
	printf("Enter Your String: ");
	gets(name);
	while(name[i]!='\0')
	{
		ccount++;
		switch(name[i])
		{
			case ' ' : wcount++;
		}
		i++;
	}
	printf("Your Characters In String: %d", ccount);
	printf("\nYour Words In String: %d", wcount);
}
