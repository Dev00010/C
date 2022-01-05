#include<stdio.h>
#include<string.h>
main()
{
	char name1[20],name2[20];
	printf("Enter name 1 => ");
	gets(name1);
    printf("Enter name 2 => ");
	gets(name2);	
	
	strcpy(name1,name2); //Copies value of name2 to name1
	printf("\nName1=>%s",name1);
	printf("\nName2=>%s",name2);
}
