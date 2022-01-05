//Program to print prime number found in an user entered array

#include<stdio.h>
main()
{
	int a[100];
	int i=0,n,no,j,x,y;
	printf("Enter limit= ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("Enter number for a(%d)=> ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<no;i++)
	{
		x=0;
		y=a[i];
		for(j=2;j<y;j++)
		{
			if(y%j==0)
			{
				x=1;
				break;
			}
		}
		if(x==0)
		{
			printf("\n%d ",y);
		}
	
	}
	
}
