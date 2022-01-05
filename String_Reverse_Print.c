//Program to print reverse string

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
	for(i=x-1;i>=0;i--)
	{
		ch=name[i];
		printf("%c",ch);
	}

}
