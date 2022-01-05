#include<stdio.h>
#include<string.h>
main()
{
	int i,n,k,x=0;
	char name[100];
	char ch1,ch2;
	printf("Enter word => ");
	gets(name);
	n=strlen(name);
	k=strlen(name)-1;
	for(i=0;i<n;i++)
	{
		ch1=name[i];
		ch2=name[k];
		if(ch1!=ch2)
		{
			x=1;
			break;
		}
		k--;
	}
	if(x==0)
	{
		printf("%s is palindrom",name);
	}
    else
	{
		printf("Not a palindrom");
	}	
	
	
	
}
