//Program to show usage of Ternary Operator

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    i=1;
    do //Do means do this
    {
        i%2==0? printf("\n%d is even",i): printf("\n%d is odd",i);
        i++;
    }
    while(i<=n);

    return 0;
}

