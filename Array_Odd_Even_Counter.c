//This program seperates odd even values entered in an array

#include<stdio.h>

main()
{
	int a[100],odd[100],even[100];
	int i,n,j=0,k=0;
	printf("\nEnter limit=> ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number for a[%d]=> ",i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++)  //Loop to sort odd even values
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}
	
	
	printf("Odd values:");
	for(i=0;i<k;i++)	//Loop to print odd values
	{
		printf(" %d ",odd[i]);
    }
    
    
    printf("\nEven values:");
    for(i=0;i<j;i++)	//Loop to print even values
    {
		printf(" %d ",even[i]);
    }
}
