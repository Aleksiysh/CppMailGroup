#include <iostream>
#include "Functions.h"

using namespace std;

int avgWord() {
	char targetWord[255] = "";
	char *tmp = targetWord;
	char ch;
	while (1)
	{
		cin.get(ch);
		if (isspace(ch) || ispunct(ch)) {
			*(tmp) = '\0';
			break;
		}
		else {
			*tmp = ch;
			tmp++;
		}

	}

	cout << targetWord;
	return 0;
}

char * getWord() {
	char ch;
	char word[255] = "";
	char *tmp = word;
	while (1)
	{
		cin.get(ch);
		if (isspace(ch) || ispunct(ch)) {
			*word = '\0';
			return word;
		}
	}
}


