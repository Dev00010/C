#include<stdio.h>
#include<string.h>
main()
{
	int i,n,no,j,x;
	printf("Enter limit=> ");
	scanf("%d",&no);
	x=1;
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		x=1;
		for(j=no;j>=i;j--)
		{    
		if(i%2==0)
		{
			printf("%d",x);
			x++; 
		}
		else
		{
		   printf("*");
		}		
		}
        
	    printf("\n");
	}
}
