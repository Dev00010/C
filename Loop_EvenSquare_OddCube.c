//This program print square of even number and cube of odd number encountered in For Loop


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
        printf("%d+",i*i);
        }
        else
        {
        printf("%d+",i*i*i);
        }
    }
    return 0;
}




