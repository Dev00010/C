//Count Vowel, Consonant in a string

#include<stdio.h>
#include<string.h>
main()
{
	int x,i,c=0,d=0;	
	char name[100];
	char ch;
	printf("\nEnter name => ");
	gets(name); 
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		{
			c++;
	    }
	    else
	    {
	    	d++;
		}
    }  
    
    printf("\nTotal Constant are => %d",d);
    printf("\nTotal Vowels are => %d",c);
}
