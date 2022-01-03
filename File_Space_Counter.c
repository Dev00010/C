//This program counts number of space encountered while reading data from file

#include<stdio.h>

main()
{
	File *f1;
	char ch;
	int space;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			space++;
		}
	}
	printf("\nSpace => %d",space);
	fclose(f1);
}
