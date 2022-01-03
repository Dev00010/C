//This program writes vowels to file v and consonants to file c

#include<stdio.h>

main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	f2=fopen("a:\\C-FilePrograms\\v.txt","w");
	f3=fopen("a:\\C-FilePrograms\\c.txt","w");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		{
		    putc(ch,f2);
	    }
	    else
	    {
	    	putc(ch,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
