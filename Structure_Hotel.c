//Program to make a structure of hotel and find hotel within user entered budget

#include<stdio.h>
struct hotel
{
	char area[100];
	char name[100];
	int room,charges;
};
main()
{
	struct hotel h[100];
	int i,n,rate;
	printf("\nEnter limit=> ");
	scanf("%d",&n);
	fflush(stdin);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Hotel Name=> ");
		gets(h[i].name);
		fflush(stdin);
		printf("\nEnter Area Name=> ");
		gets(h[i].area);
		fflush(stdin);
		printf("\nEnter Available Rooms=> ");
		scanf("%d",&h[i].room);
		fflush(stdin);
		printf("\nEnter Room Charges=> ");
		scanf("%d",&h[i].charges);
		fflush(stdin);
	}
	printf("\nEnter your budget=> ");
	scanf("%d",&rate);
	fflush(stdin);
	
	printf("\nHotels Available in your budget are : ");
	for(i=0;i<n;i++)
	{
		if(rate==h[i].charges)
		{
			printf("\nName=> %s",h[i].name);
			printf("\nArea=> %s",h[i].area);
			printf("\nRoom Available=> %d",h[i].room);
			printf("\nCharges=> %d",h[i].charges);
		}
		else
		{
			printf("No hotel found");
		}
	}
}
