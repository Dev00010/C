//Program to print if user enter number is prime or not

#include<stdio.h>
main()
{
   int i,n,no,x=0;
   printf("Enter number=> ");
   scanf("%d",&no);
   for(i=2;i<no;i++)
   {
   	if (no%i==0)
   	   { 
   		   x=1;
   		   break;
	   }
   }
   if(x==0)
   {
     printf("%d is a prime number",no);
   }
   else
   {
     printf("%d is not a prime number",no);
   }
}
