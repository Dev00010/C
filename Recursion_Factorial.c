//Program to print factorial using recursion function

#include<stdio.h>

int fact(int a)
{
	int ans;
	if(a==1)
	{
		return 1;
	}
	else
	{
		ans=a*fact(a-1);
    }
    return ans;
}
main()
{
	int a,ans;
	printf("\nEnter value=> ");
	scanf("%d",&a);
	ans=fact(a);
	printf("\n Ans= %d",ans);
}
