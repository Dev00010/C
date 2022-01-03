//This program checks if any value entered in array is divisible by 7 or not

#include <stdio.h>

int main()
{
    int i,n,a[100],s=0,c=0;
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
        if(a[i]%7==0)
        {
            printf("\n%d is divisible by 7",a[i]);
            s=s+a[i];
            c++;
        }
    }
    printf("\nSum=>%d and Count=>%d",s,c);
    return 0;
}

