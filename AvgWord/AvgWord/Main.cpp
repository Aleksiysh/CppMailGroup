#include <iostream>
#include <clocale>
#include <windows.h>

#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	avgWord();


	cin.get();
	cout << "\n Press Enter";
	cin.get();

	return 0;
}