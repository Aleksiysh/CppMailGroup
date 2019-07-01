#include <iostream>
#include <clocale>
#include <windows.h>

#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char   a[] = "asd\n";
	cout << a;*/


	cout<<avg();
	
	cin.get(); cin.get(); cin.get();
	cin.get();
	cout << "\n Press Enter";
	cin.get();

	return 0;
}