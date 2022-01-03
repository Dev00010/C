//This program reads from a file and prints its data

#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
	fclose(f1);
}
