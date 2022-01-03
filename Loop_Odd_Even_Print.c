//Loop to print Odd, Even using Ternary Operation in For Loop

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        i%2==0? printf("\n%d is even",i):printf("\n%d is odd",i);
    }
    return 0;
}


