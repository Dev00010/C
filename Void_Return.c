//This program shows use of return 

#include<stdio.h>

int max(int num1,int num2)
{
   if(num1>num2)
   {
   	return num1;
   }
   else if(num1<num2)
   {
   return num2;
   }
}
void square(int num3)
{
	printf("\nSquare of %d is %d\n",num3,num3*num3);
}
main()
{
	int num1,num2,num3,c;

	printf("\nEnter 2 number: ");
	scanf("%d %d",&num1,&num2);
    c=max(num1,num2);
    printf("\n Max = %d",c);
    square(c);
}
