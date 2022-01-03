//This program takes input till user enter limit in 2 array and then add them to 3rd array for printing

#include <stdio.h>

int main()
{
    int i,n,a[100],b[100];
    printf("Enter limit for a = ");  // Asking User to Enter Limit for Array a[]
    scanf("%d",&n);
    
    printf("Enter limit for b = ");  //Asking User to Enter Limit for Array b[]
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)   //Loop to get input for array a[] till n limit
    {
        printf("\nEnter number of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++)  //Loop to get input for array b[] till n limit
    {
        printf("\nEnter number of b[%d] => ",i);
        scanf("%d",&b[i]);
    }
    
    
    printf("Values of A:- "); 
    for(i=0;i<n;i++)	 //Loop to print values of a[]
    {
    	printf("%d ",a[i]);
	}
	
	
    printf("\nValues of B:- ");  
	for(i=0;i<n;i++)	//Loop to print values of b[]
    {
    	printf("%d ",b[i]);
	}
	
	
    printf("\nAddition of Array:-");  
	for(i=0;i<n;i++)	// Loop to print addition of both array
    {
    	printf("\n%d + %d = %d",a[i],b[i],a[i]+b[i]);
	}
	
	
    return 0;
}

