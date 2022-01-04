//Program to print max value found in an array

#include<stdio.h>
main()
{
	int a[100];
	int i=0,n,no,pos,m;
	pos=0;
	m=a[0];
	printf("Enter limit= ");
	scanf("%d",&no);
	
	
	for(i=0;i<no;i++)
	{
		printf("Enter number for a(%d)=> ",i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<no;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
			pos=1;
		}
	}
	printf("\n%d is max",m);
}
