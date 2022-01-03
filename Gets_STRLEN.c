//This program demonstrates usage of gets() function and strlen() function

#include<stdio.h>
#include<string.h>
main()
{
	int x;	
	char name[100];
	printf("\nEnter name => ");
	gets(name); //Gets for taking value with space
	printf("\nName => %s",name);
	x=strlen(name);
	printf("\nLength => %d",x);
}
