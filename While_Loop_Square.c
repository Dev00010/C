//This program prints number along with its square using while loop

#include <stdio.h>

int main()
{
    int i,n;
    i=1;
    printf("Enter number = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d --- %d",i,i*i);
        i++;
    }

    return 0;
}
