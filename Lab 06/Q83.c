#include<stdio.h>
#include<string.h>
int main()
{
	char st[20], tamp;
	int i=0, j=0, len;
	printf("Enter String: ");
	fgets(st, sizeof(st), stdin);
	len = strlen(st);
	for(i=0; i<len; i++)
	{
		for(j=0; j<len-i-1; j++)
		{
			if(st[j]>st[j+1])
			{
				tamp=st[j];
				st[j]=st[j+1];
				st[j+1]=tamp;
			}
		}
	}
	fputs(st, stdout);
}
