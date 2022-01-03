//Program to print table using Do..While Loop

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    i=1;
    do //Do means do this
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    }
    while(i<=n);

    return 0;
}

