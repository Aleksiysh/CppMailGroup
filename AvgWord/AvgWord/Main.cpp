#include <iostream>
#include <clocale>
#include <windows.h>

#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout<<avgWord();
	//char a = 'ô';

	//cout << isspace((unsigned char)a);
	//cout<<" "<<ispunct((unsigned char)a);
	cin.get(); cin.get(); cin.get();
	cin.get();
	cout << "\n Press Enter";
	cin.get();

	return 0;
}