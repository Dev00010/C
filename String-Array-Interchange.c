#include<stdio.h>
#include<string.h>
main()
{
	int x,i;
	char ch;
	char name[100];
	printf("Enter word=> ");
	gets(name);
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		if(ch>=65 && ch<=90)
		{
			printf("%c",ch+32);
		}
		else if(ch>=97 && ch<122)
		{
			printf("%c",ch-32);
		}
		else
		{
			printf("Others=>%c",ch+32);
		}
	}
}
