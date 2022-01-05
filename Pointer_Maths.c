//Small application using pointers

#include<stdio.h>
main()
{
	int a,b;
	int *ptra,*ptrb;
	printf("\nEnter 2 values=> ");
	scanf("%d %d",&a,&b);
	ptra=&a;
	ptrb=&b;
	printf("Addition=> %d",*ptra + *ptrb);
	printf("\nSubtraction=> %d",*ptra - *ptrb);
	printf("\nMultiplication=> %d",*ptra * *ptrb);
	printf("\nDivide=> %d",*ptra / *ptrb);
}
