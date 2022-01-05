#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j;
	printf("Enter limit=> ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=no;j>=i;j--)
		{
			printf("* ");
		}
	    printf("\n");
	}
}
