
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);

// generated using http://listofrandomnames.com/

char words[][20] = { "metalepsis","cellulating","caustical","inosculating","lerner","outchide","disproportionate","malang","ammonification","energise" };
int nwords = 10;



void main()
{
	char word[20];
	int i = 0;

	printLongestWord();

	i = findWordWithMostVowels();
	printf("Word with most vowels is: %s \n", words[i]);

	

}

void printLongestWord()
{
	int i = 0;
	 int len = 0;
	 int pos = 0;
	for (i = 0; i < 10; i++) {
		if (strlen(words[i]) > len) {
			len = strlen(words[i]);
			pos = i;
		}
	}

	printf("longest word is %s , with %d characters \n", words[i], len);

}


int findWord(char word[])
{
	puts("enter word");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}
}


int findWordWithMostVowels()
{
	int i = 0;
	int numVowels = 0;
	int pos = 0;
	for (i = 0; i < 10; i++) {
		if (strnumVowels(words[i]) > numVowels) {
			numVowels = strnumVowels(words[i]);
			pos = i;
		}
}

int isVowel(char c)
{
	if (c == 'a', 'e', 'i', 'o', 'u');
	c = toupper(c);
	
	}
}