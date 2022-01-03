//This program counts vowels and consonant in a file

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
			vowel++;
		}
		else
		{
			consonant++;
		}
	}
	printf("\nVowel => %d",vowel);
	printf("\nConsonant => %d",consonant);
	fclose(f1);
}
