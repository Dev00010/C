#include<stdio.h>
#include<string.h>

void max(int num1,int num2)
{
   if(num1>num2)
   {
   	printf("%d is grater than %d",num1,num2);
   }
   else if(num1<num2)
   {
   	printf("%d is smaller than %d",num1,num2);
   }
   else
   {
   	printf("%d is equal to %d",num1,num2);
   }
}
void square(int num3)
{
	printf("Square of %d is %d\n",num3,num3*num3);
}
main()
{
	int num1,num2,num3,x;

	printf("\nEnter 2 number: ");
	scanf("%d %d",&num1,&num2);
    max(num1,num2);
    printf("\nEnter number: ");
    scanf("%d",&num3);
    square(num3);
}
