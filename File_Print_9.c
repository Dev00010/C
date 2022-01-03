//This program prints 9 instead of vowel in output

#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int vowel,consonant;
	f1=fopen("a:\\C-FilePrograms\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		{
			printf("9");
		}
		else
		{
			printf("%c",ch);
		}
	}

	fclose(f1);
}
