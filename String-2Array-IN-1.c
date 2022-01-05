#include<stdio.h>
#include<string.h>
main()
{
	int i,n,k,j=0;
	char ch1,ch2;
	char name1[100],name2[100],name3[100]={" "};
	printf("Enter Name => ");
	gets(name1);
	n=strlen(name1);
	printf("Enter Surname => ");
	gets(name2);
	k=strlen(name2);
	for(i=0;i<n;i++)
	{
		name3[j]=name1[i];
		j++;
	}
	name3[j]=' ';
	j++;
	for(i=0;i<k;i++)
	{
		name3[j]=name2[i];
		j++;
	}
	printf("\nFull Name =>%s",name3);
	
}
