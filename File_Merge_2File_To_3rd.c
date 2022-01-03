//This program appends text from File 1 and File 2 to File 3

#include<stdio.h>

main()
{
	FILE *f1,*f2,*f3;
	char ch1,ch2;
	f1=fopen("a:\\C-FilePrograms\\First.txt","r");
	f2=fopen("a:\\C-FilePrograms\\Second.txt","r");
	f3=fopen("a:\\C-FilePrograms\\Third.txt","w");
	while(ch1!=EOF)
	{
		ch1=getc(f1);
		putc(ch1,f3);
	}
		while(ch2!=EOF)
	{
		ch2=getc(f2);
		putc(ch2,f3);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
