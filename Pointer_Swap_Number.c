//Program to swap 2 numbers using pointers

#include<stdio.h>
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
main()
{
	int a,b,c;
	printf("\nEnter 2 values=> ");
	scanf("%d %d",&a,&b);
	printf("\nValue before swap are=> %d %d",a,b);
	swap(&a,&b);
	printf("\nValue after swap are=> %d %d",a,b);
}
