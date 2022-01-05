//This program demonstrates Armstrong Number with help of While Loop

#include<stdio.h>
main()
{
	int no,x;
	int s=0,cno;
	printf("\nEnter number=> ");
	scanf("%d",&no);
	cno=no;
	while(no>0)
	{
		x=no%10;
		s=s+(x*x*x);
		no=no/10;
	}
	printf("\nExpand number=> %d",s);
	if(s==cno)
	{
		printf("\nNumber is an armstrong number");
	}
	else
	{
		printf("\nNumber is not an armstrong number");
	}
}
