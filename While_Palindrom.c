//This program check if number entered by user is palindrom or not

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
		s=s*10+x;
		no=no/10;
	}
	printf("\nReverse number=> %d",s);
	if(s==cno)
	{
		printf("\nNumber is palindrom");
	}
	else
	{
		printf("\nNumber is not palindrom");
	}
}
