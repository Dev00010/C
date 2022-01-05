//Program to show usage of pointers

#include<stdio.h>
main()
{
	int a,*b;
	a=50;
	b=&a;
	printf("\nValue of a is %d and b is %d",a,b);
	printf("\nValue of a is %d and b is %d",a,*b);
	a=100;
	printf("\nValue of a is %d and b is %d",a,*b);
	*b=500;
	printf("\nValue of a is %d and b is %d",a,*b);
}
