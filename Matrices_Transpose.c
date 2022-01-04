//Program to print transpose of matrices

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
	
	
	printf("\nARRAY : \n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("TRANSPOSE OF ARRAY IS : \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		b[i][j]=a[j][i];
    		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}
