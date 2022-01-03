//This program creates and writes data to file with help of fprintf and reads data using fscanf

#include<stdio.h>
#include<string.h>
main()
{
	File *fp;
	int rollno;
	char name[20];
	int i,n;
	printf("\nEnter number of record to be entered=> ");
	scanf("%d",&n);
	
	fp=fopen("f1.txt","w");
	for(i=0;i<n;i++)
	{
	   printf("\nEnter rollno=> ");
	   scanf("%d",&rollno);
	   fflush(stdnin);
	   printf("\nEnter name=> ");
	   gets(name);
	   fprintf("\n%d %s",rollno,name);	
	}  
	fclose(fp);
	fp=fopen("f1.txt","r");
	printf("\nRecords:");
	for(i=0;i<n;i++)
	{
	   	fscanf(fp,"%d %s",&rollno,&name);
	   	printf("\n%d %s",rollno,name);
	}
	fclose(fp);
}
