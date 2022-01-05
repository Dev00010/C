//Program to show use of struct function

#include<stdio.h>
struct emp
{
	int no;
	char name[30];
	int salary;
};
main()
{
	struct emp e[100];
	int i,n;
	printf("\nEnter limit=> ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter no of e[%d]=> ",i+1);
		scanf("%d",&e[i].no);
        fflush(stdin);
		printf("\nEnter employee name=> ");
		gets(e[i].name);
		printf("Enter salary=> ");
		scanf("%d",&e[i].salary);	
	}
	printf("\nNo\tName\tSalary");
	printf("\n====================");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%d",e[i].no,e[i].name,e[i].salary);
	}
	printf("\n====================");
}
