//Program to count Negative values in a matrices

#include<stdio.h>
main()
{
	int a[3][3];
	int i,j,k=0;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	     printf("\nEnter number a[%d][%d]=> ",i,j);
	     scanf("%d",&a[i][j]);
        }
	}
	
	
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]<0)
			{
				k++;
			}
		}
	}
	
	
	printf("Total negative value are=> %d",k);
}
