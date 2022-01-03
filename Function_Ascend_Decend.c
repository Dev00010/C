//This program is to print Ascending order, Decending order according to function call

#include<stdio.h>
#include<string.h>
void ascending()
{
	
   int i,no;
   printf("\nEnter ending number=> ");
   scanf("%d",&no);
   printf("\nAscending order is: ");
   for(i=1;i<=no;i++)
   {
   	printf(" %d",i);
   }
}

void descending()
{
   int no,i;
   printf("\nEnter ending number=> ");
   scanf("%d",&no);
   printf("\nDecending order is: ");
   for(i=no;i>=1;i--)
   {
   	printf(" %d",i);
   }
}
main()
{
	int choice;
	printf("\nEnter 1 for Ascending order.");
	printf("\nEnter 2 for Descending order.");
	printf("\nEnter 3 to Exit.");
	printf("\nEnter your choice=> ");
	scanf("%d",&choice);
	if(choice==1)
	{
		ascending();
	}
	else if(choice==2)
	{
		descending();
	}
	else
	{
		printf("!!!Bye!!!");
	}

}
