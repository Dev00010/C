//Program to print square of number using Do..While loop

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number = ");
    scanf("%d",&n);
    i=1;
    do //Do means do this
    {
        printf("\n%d --- %d",i,i*i);
        i++;
    }
    while(i<=n);

    return 0;
}

