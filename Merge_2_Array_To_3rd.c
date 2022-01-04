//Program to merge array a[] and b[] to c[] and print it

#include <stdio.h>

int main()
{
    int i,n1,n2,a[100],b[100],c[100],k=0,t=0;
    
	printf("Enter limit for a = ");
    scanf("%d",&n1);
    
    for(i=0;i<n1;i++)
    {
        printf("\nEnter number of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter limit for b = ");
    scanf("%d",&n2);
    
    
	for(i=0;i<n2;i++)
    {
        printf("\nEnter number of b[%d] => ",i);
        scanf("%d",&b[i]);
    }
    
    t=0;
    
	
	printf("\nValues of C:- ");
    
	for(i=0;i<n1;i++)
    {
    	c[t]=a[i];
    	t++;
	}
	
	for(i=0;i<n2;i++)
    {
        c[t]=b[i];
    	t++;
	}	
	
	
	for(i=0;i<t;i++)
	{
		printf("%d ",c[i]);
	}
    return 0;
}

