#include <stdio.h>

int main()
{
    int i,n,a[100],s=0;
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
        printf("\na[%d] = %d",i,a[i]);
        s=s+a[i];
    }
    printf("\nSum = %d",s);
    return 0;
}
