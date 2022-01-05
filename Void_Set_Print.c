//This program shows use of void function

#include <stdio.h>

void setdata(int x[],int n)
{
	int i;
	printf("\nLet's enter");
    for(i=0;i<n;i++)
    {
        printf("\nEnter number of [%d] => ",i);
        scanf("%d",&x[i]);
    }
	
}

void printdata(int x[],int n)
{
	int i;
	printf("\nValues\n");
	for (i=0;i<n;i++)
    {
    	printf("%d ",x[i]);
    }
    printf("\n");
}

int main()
{
    int i,n,a[100],b[100],c[100];
    printf("Enter limit for array = ");
    scanf("%d",&n);
    
	setdata(a,n);
	setdata(b,n);
	
	printdata(a,n);
	printdata(b,n);
	
	printf("\nValues of C:- ");
    for(i=0;i<n;i++)
    {
    	c[i]=a[i]+b[i];
	}
	printdata(c,n);
    return 0;
}

