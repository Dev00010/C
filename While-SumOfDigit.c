//This program prints sum of digits that user inputs

#include<stdio.h>
main()
{
	int no,x;
	int s=0;
	printf("\nEnter number=> ");
	scanf("%d",&no);
	while(no>0)
	{
		x=no%10;
		s=s+x;
		no=no/10;
	}
	printf("Sum of digit=> %d",s);
}
