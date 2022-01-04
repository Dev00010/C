//Program to add two matrices to third and print it

#include<stdio.h>

main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	
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
	     printf("\nEnter number b[%d][%d]=> ",i,j);
	     scanf("%d",&b[i][j]);
        }
	}
	
	
	printf("\nARRAY 1: \n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("ARRAY 2: \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("ADDITION OF 2 ARRAY IS: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	    c[i][j]=a[i][j]+b[i][j];
	    printf("%d ",c[i][j]);	
        }
        printf("\n");
	}
	
}
