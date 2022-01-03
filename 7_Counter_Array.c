//This program takes input in array till user defined limit and check for occurrence of 7


#include <stdio.h>

int main()
{
    int i,n,a[100],c=0;
    printf("Enter limit = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter number of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)  //Loop to check if 7 present in array
    {
        if(a[i]==7)
        {
            c++;   //Counter increment if 7 found
        }
    }
    printf("VALUES:-")
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

