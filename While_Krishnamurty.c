//This program shows Krishnamurty Number using While Loop

#include<stdio.h>
main()
{
	int no,x,i;
	int s=0,cno,f=1;
	printf("\nEnter number=> ");
	scanf("%d",&no);
	cno=no;
	while(no>0)
	{
		f=1;	
		x=no%10;
	    for(i=1;i<=x;i++)
		{
			f=f*i;
		}
		s=s+f;
		no=no/10;
	}
	printf("\nNumber=> %d",s);
	if(s==cno)
	{
		printf("\nNumber is an krishnamurty number");
	}
	else
	{
		printf("\nNumber is not an krishnamurty number");
	}
}
