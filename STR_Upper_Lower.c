//Upper, lower case counter

#include<stdio.h>
#include<string.h>
main()
{
	char name1[20],name2[20];
	printf("Enter name 1 => ");
	gets(name1);
    printf("Enter name 2 => ");
	gets(name2);	
	
	printf("\nName1=>%s",strlwr(name1)); //strlwr means all lower char
 	printf("\nName2=>%s",strupr(name2)); //strupr means all upper char
}
