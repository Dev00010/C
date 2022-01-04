//Program to print count of odd, even values

#include <stdio.h>

int main()
{
    int i,n,a[100],se=0,ce=0,so=0,co=0;
    printf("Enter limit = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter number of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    printf("\nValues");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even",a[i]);
            se=se+a[i];
            ce++;
        }
        else
        {
            printf("\n%d is odd",a[i]);
            so=so+a[i];
            co++;
        }
    }
    printf("\nSum of even number =>%d and Count of even number =>%d",se,ce);
    printf("\nSum of odd number =>%d and Count of odd number =>%d",so,co);
    return 0;
}

