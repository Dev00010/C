//This Program takes input in 2 different array and compares both to find comman values

#include<stdio.h>
main()
{
	int i=0,n,no,x,j=0;
	int a[100],b[100];
	printf("Enter Limit=> ");
	scanf("%d",&no);
	for(i=0;i<no;i++)   //Loop to Fetch Value For Array a[]
	{
	   printf("Enter number for a(%d)=> ",i);
	   scanf("%d",&a[i]);
    }
    for(i=0;i<no;i++)  //Loop to Fetch Value For Array b[]
    {
    	printf("Enter number for b(%d)=> ",i);
    	scanf("%d",&b[i]);
	}
	printf("Common Values:");
	for(i=0;i<no;i++)  //Loop to Fetch Values from a[]
	{
		x=a[i];
		for(j=0;j<no;j++)	//Loop to Fetch values from b[] to compare
		{
			if(x==b[j])
			{ 
				printf("\n %d",x);
			}
		}
	}
}
