#include<stdio.h>
#include<string.h>
main()
{
	int x,i,y;	
	char name1[100],name2[100];
	char ch1,ch2;
	printf("\nEnter name1 => ");
	gets(name1); 
	x=strlen(name1);

    printf("\nEnter name2 => ");
	gets(name2); 
	y=strlen(name2);
	
	if(x!=y)
	{
		printf("No match found");
	}
	else
	{
		for(i=0;i<x;i++)
		{
			ch1=name1[i];
			ch2=name2[i];
			if(ch1!=ch2)
			{
				printf("\n%c is not equal to %c",ch1,ch2);
			}
			else
			{
				printf("\n%c is equal to %c",ch1,ch2);
			}
		}
	}
}
