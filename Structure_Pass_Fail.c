#include<stdio.h>
struct student
{
	int no;
	char name[30];
	int hindi,english;
};
main()
{
	struct student s[100];
	int i,n,total,rno,x=0;
	printf("\nEnter limit=> ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter no of s[%d]=> ",i+1);
		scanf("%d",&s[i].no);
        fflush(stdin);
		printf("\nEnter student name=> ");
		gets(s[i].name);
		printf("Enter marks of hindi=> ");
		scanf("%d",&s[i].hindi);
		printf("Enter marks of english=> ");
		scanf("%d",&s[i].english);	
	}
	
	printf("Enter roll number for search the record => ");
	scanf("%d",&rno);
	for(i=0;i<n;i++)
	{
		total=s[i].hindi+s[i].english;
	
		if(s[i].no==rno)
		{
			printf("\nNo\tName\tHindi\tEnglish\tTotal\tPassOrFail");
			printf("\n==================================================");
				if(total>50)
				{
					printf("\n%d\t%s\t%d\t%d\t%d\tPass",s[i].no,s[i].name,s[i].hindi,s[i].english);
				}
				else
				{
					printf("\n%d\t%s\t%d\t%d\t%d\tFail",s[i].no,s[i].name,s[i].hindi,s[i].english);	
				}
				x=10;
		printf("\n==================================================");

		}
		
	}
	if(x==0)
	{
		printf("\nRecord no found");
	}
}
