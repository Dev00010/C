#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j,k=1;
	printf("\nEnter limit=> ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
            printf("%d ",k);
            k++;

	    }
		printf("\n"); 
	}


	
}
