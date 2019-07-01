#include <iostream>
#include "Functions.h"

using namespace std;

double avgWord() {

	double countOfWord = 0;
	double countOfSentece = 0;
	char *targetWord=new char[255]; //искомое слово
	char *word = new char[255];		//очередное слово с символом конца слова или предложени€
	/*ѕолучили слово*/
	//targetWord = 
	getWord(targetWord);
	endSentece(targetWord);
	do {
		getWord(word);
		if (endSentece(word)) countOfSentece++;
		if (!strcmp(word, targetWord)) countOfWord++;
	} while (*word != '\0');
	if(countOfSentece!=0)
		return countOfWord/countOfSentece;
	else return 0;
}

void getWord(char *word) {
	char *tmp =word;
	char ch;
	do
	{
		cin.get(ch);
		*tmp = ch;
		tmp++;
		//cout << ch << " " << isspace(ch) << " " << ispunct(ch) << endl;
	} while (isspace((unsigned char)ch)==0 && ispunct((unsigned char)ch)==0);
	*(tmp) = '\0';
	//return word;
	
}

bool endSentece(char *word) {
	bool end = false;
	char * tmp = word;
	while (*tmp) tmp++;
	if (*(tmp - 1) == '.' || *(tmp - 1) == '!' || *(tmp - 1) == '?') 
		end = true;
	*(tmp - 1) = '\0';
	return end;
}

int strcmp(const char * str1, const char * str2)
{
	while (*str1 == *str2 && *str1) {
		str1++, str2++;
	}
	return *str1 - *str2;
}


