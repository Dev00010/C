//This program prints data in file without space

#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int space;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch!=' ')
		{
		printf("%c",ch);
	    }
	}

	fclose(f1);
}
