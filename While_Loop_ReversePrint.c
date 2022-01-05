//Program to print reverse number of user input

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
		s=s*10+x;
		no=no/10;
	}
	printf("Reverse number=> %d",s);
}
