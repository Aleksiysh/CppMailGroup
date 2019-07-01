#include <iostream>
#include "Functions.h"

using namespace std;


int strcmp(const char * str1, const char * str2)
{
	while (*str1 == *str2 && *str1) {
		str1++, str2++;
	}
	return *str1 - *str2;
}

double avg() {
	double countOfWord = 0;
	double countOfSentece = 0;
	char *targetWord = new char[255]; //искомое слово
	char *word = new char[255];		//очередное слово с символом конца слова или предложения
	char ch;
	char *tmpchar;
	tmpchar = targetWord;
	while ((ch = cin.get()) != '\n') {
		if ((isspace((unsigned char)ch) == 0 && ispunct((unsigned char)ch) == 0))
		{
			*tmpchar = ch;
			tmpchar++;
		}
		else {
			*tmpchar = '\0';
			break;
		}

	}
	tmpchar = word;
	while ((ch = cin.get()) != '\n') {
		if (ch == '.' || ch == '?' || ch == '!')
		{
			countOfSentece++;
			//continue;
		}
		if (isspace((unsigned char)ch) == 0 && ispunct((unsigned char)ch) == 0)
		{
			*tmpchar = ch;
			tmpchar++;
		}
		else {
			*tmpchar = '\0';
			if (strcmp(word, targetWord) == 0)
				countOfWord++;
			tmpchar = word;
		}

	}
	return countOfWord / countOfSentece;
}


