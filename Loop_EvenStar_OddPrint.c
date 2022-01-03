//This program prints * for even number and number for odd value

#include <stdio.h>

int main()
{
    int i,n;
    int s=0;
    printf("Enter number = ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        printf("+*+");
        }
        else
        {
        printf("%d",i);
        }
    }
    return 0;
}



