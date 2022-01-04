#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j;
	printf("\nEnter limit=> ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
	     if(i%2==0)
	     {
	     	printf("0");
		 }
		 else
		 {
		 	printf("1");
		 }
	    }
		printf("\n"); 
	}


	
}
