#include<stdio.h>
#include<string.h>
main()
{
	int x,i;	
	char name[100];
	char ch;
	printf("\nEnter name => ");
	gets(name); 
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		printf("\nname[%d] %c",i,ch);
	}

}
