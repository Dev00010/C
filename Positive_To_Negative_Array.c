//Program to convert positive value to negative or vice-versa and print it

#include <stdio.h>

int main()
{
    int i,n,a[100];
    printf("Enter limit = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter number of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	printf("\n%d",a[i]*-1);
	}
    return 0;
}

