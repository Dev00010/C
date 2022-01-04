//Program to print only Diagonal elements in a matrices

#include<stdio.h>
main()
{
	int a[3][3];
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
            if(i==j)
			{
			printf("%d ",a[i][j]);
			}
			else
			{
			printf("* ");	
			}
		}
		printf("\n");
	}

}
