//This program check if number is devisible by table number that user entered

#include <stdio.h>

int main()
{
    int i,n,table;
    int c=0,s=0;
    printf("Enter table number = ");
    scanf("%d",&table);
    printf("Enter number = ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        if(i%table==0)
        {
            printf("\n%d is divisible by %d",i,table);
            c++;
            s=s+i;
        }
    }
    printf("\nSum = %d and Count = %d",s,c);
    return 0;
}



