#include<stdio.h>
#include<string.h>
main()
{
	int a[100];
	int i=0;
	int *ptr;
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("Enter value of a(%d)=> ",i);
		scanf("%d",&a[i]);
	}
		printf("Values: ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*ptr);
		ptr++;
	}	
}
