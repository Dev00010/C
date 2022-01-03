//Program to print even number using For Loop

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\n%d is even",i);
        }
    }
    return 0;
}


