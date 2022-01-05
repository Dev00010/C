//Demo program to show use of while loop

#include<stdio.h>
main()
{
	int i,no;
	i=1;
	printf("Enter no=> ");
	scanf("%d",&no);
	while(i<=no)
	{
		printf("\n%d",i);
		i++;
	}
	
	
}
