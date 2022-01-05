#include<stdio.h>
#include<string.h>
main()
{
	int i,x,t=0,s=0;
	char ch;
	char name[100],vowel[100]={" "},co[100]={" "};
	printf("Enter Name => ");
	gets(name);
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'|| ch=='u'||ch=='U')
		{
			vowel[t]=ch;
			t++;
			vowel[t]=' ';
			t++;
		}
		else
		{
			co[s]=ch;
			s++;
			co[s]=' ';
			s++;
		}
	}

	printf("\nVowel=>%s ",vowel);
	printf("\nConsonant=>%s ",co);
		
}
