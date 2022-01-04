#include<stdio.h>
#include<string.h>
main()
{
	int i,n,x,j,no;
	printf("\nEnter limit=> ");
	scanf("%d",&no);
	x=5;
	for(i=1;i<=no;i++)
	{
		for(j=no;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",x);
		}
		x--;
		printf("\n");
	}
}
