//This program writes data from file 1 to file 2

#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	f2=fopen("a:\\C-FilePrograms\\pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("\nCopied");
}
