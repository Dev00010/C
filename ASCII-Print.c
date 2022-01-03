//This program print ASCII Value of every keyboard key entered

#include<stdio.h>
#include<string.h>
main()
{
	int x,i;
	char name[100];
	char ch;
	printf("Enter word=> ");
	gets(name);
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		printf("\n%c==>%d",ch,ch);
	}
	
	
	
}
