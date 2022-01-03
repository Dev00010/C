//Program to show demo of Do..While Loop

#include<stdio.h>
main()
{
	int i,no;
	i=1;
	printf("Enter no=> ");
	scanf("%d",&no);
	do
	{
		printf("\n%d",i);
		i++;
	}
	while(i<=no);
	
}
