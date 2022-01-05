#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char ch;
	int i,x,a=0,e=0,o=0,u=0,j=0;
	printf("Enter name=> ");
	gets(name);
	x=strlen(name);
	for(j=0;j<x;j++)
	{
		printf("\n %c",name[j]);
	}
	for(j=0;j<x;j++)
	{
		ch=name[j];
		if (ch=='a' || ch=='A')
		{
			a++;
		}
		else if (ch=='e' || ch=='E')
		{
			e++;
		}
		else if (ch=='i' || ch=='I')
		{
			i++;
		}
		else if (ch=='o' || ch=='O')
		{
			o++;
		}
		else if (ch=='u' || ch=='U')
		{
			u++;
		}
		else
		{
			
		}
	}
	printf("\nTotal a are=> %d",a);
	printf("\nTotal e are=> %d",e);
	printf("\nTotal i are=> %d",i);
	printf("\nTotal o are=> %d",o);
	printf("\nTotal u are=> %d",u);
}
