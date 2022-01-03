//This program searches for occurrence of user entered number

#include <stdio.h>

int main()
{
    int a[100]={11,22,33,44,55,11,77,88,99,11,20,5,6,7,80,35};
    int c=0;
    int i,n=16,x;
    
    printf("\nEnter value for search =>");
    scanf("%d",&x);
    
    
    for(i=0;i<n;i++)	//Loop to search for user enter value in array
    {
        if(a[i]==x)
        {
            c++;
        }
    }
    
    
    if(c>=1)
    {
    printf("\nCount=>%d",c);
    }
    else
    {
        printf("No count found");
    }
    return 0;
}

