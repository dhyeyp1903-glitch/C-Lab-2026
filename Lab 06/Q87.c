#include<stdio.h>
#include<string.h>
int main()
{
	char st[10][40], tamp[40];
	int i=0, j=0, n;
	printf("Enter Total Names: ");
	scanf("%d", &n);
	getchar();
	printf("Enter Names: ");
	for(i=0; i<n; i++)
	{
		fgets(st[i], sizeof(st[i]), stdin);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(strcmp(st[j],st[j+1])>0)
			{
				strcpy(tamp,st[j]);
				strcpy(st[j],st[j+1]);
				strcpy(st[j+1],tamp);
			}
		}
	}
	printf("Alphabetical Order: \n");
	for(i=0; i<n; i++)
	{
		fputs(st[i], stdout);
	}
}
