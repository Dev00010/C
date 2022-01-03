//This program print Fibonacci Series

#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,i,no;
	printf("\nEnter number of elements=> ");
	scanf("%d",&no);
	printf("\n %d %d ",n1,n2);
	for(i=2;i<no;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
}
