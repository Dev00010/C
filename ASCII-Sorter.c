//Loop to Sort ASCII value for UpperCase, LowerCase or other and print count of their occurrence

#include<stdio.h>
#include<string.h>
main()
{
	int x,i,u=0,l=0,o=0;
	char name[100];
	char ch;
	printf("Enter word=> ");
	gets(name);
	x=strlen(name);
	
	
	for(i=0;i<x;i++)
	{
	    ch=name[i];
		if(ch>=65 && ch<=90)
		{
		u++;
	    }
	    else if(ch>=97 && ch<=122)
	    {
	    	l++;
		}
		else
		{
			o++;
		}
	}
	
	
	printf("\nUpper Letter=> %d",u);
	printf("\nLower Letter=> %d",l);
	printf("\nOthers=> %d",o);
	
}
