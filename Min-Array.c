//Program to print minimum value in an array

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
	pos=0;
	m=a[0];
	for(i=0;i<no;i++)
	{
		if(m>a[i])
		{
			m=a[i];
			pos=1;
		}
	}
	printf("\n%d is min",m);
}
