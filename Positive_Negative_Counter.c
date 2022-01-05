//Program to count +ve and -ve values

#include <stdio.h>

int main()
{
    int a[100]={11,22,-33,44,55,-11,77,88,-99,11,20,-5,6,-7,80,-35};
    int cp=0,cn=0;
    int i,n=16,x;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("\n%d is positive",a[i]);
            cp++;
        }
        else
        {
            printf("\n%d is negative",a[i]);
            cn++;
        }
    }
    if(cp>1)
    {
        printf("\nCount =>%d",cp);
    }
    else
    {
        printf("\nNo Count Found");
    }
    if(cn>1)
    {
        printf("\nCount =>%d",cn);
    }
    else
    {
        printf("\nNo Count Found");
    }
    return 0;
}

