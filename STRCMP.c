//Program to show use of strcmp() function

#include<stdio.h>
#include<string.h>
main()
{
	 char name1[100],name2[100];
	 printf("\nEnter Name=> ");
	 gets(name1);
	 printf("\nEnter second Name=> ");
	 gets(name2);
	 printf("\n Name=> %d",strcmp(name1,name2));
}
