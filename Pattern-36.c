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
	    	if (i==1 || i==no || j==1 || j==no)
	    	{
		       printf("* ");
		    }
		    else
		    {
		    	printf("  ");
			}
	    }
	    printf("\n");
	}

}
