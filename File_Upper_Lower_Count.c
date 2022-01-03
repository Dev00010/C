//This program counts Uppercase and Lowercase letter encountered while reading a data

#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int u=0,l=0,o=0;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch>=65 && ch<=90)
		{
			u++;
		}
		else if (ch>=97 && ch<=122)
		{
			l++;
		}
		else
		{
			o++;
		}
	}
	printf("Total upper case letter=> %d",u);
    printf("\nTotal lower case letter=> %d",l);
    printf("\nOther=> %d",o);
	fclose(f1);
}
