#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

int main() {

	int max;;
	int cur = 0;
	int prev_max;
	cin >> prev_max;
	cin >> max;
	if (prev_max > max) {
		cur = prev_max; prev_max = max; max = cur;
	}
	cin >> cur;
	while (cur != 0) {
		if (max < cur) {
			prev_max = max;
			max = cur;
			if (prev_max < cur)
				prev_max = cur;
		}
		else if (prev_max < cur) prev_max = cur;
		cin >> cur;
	}
	cout << prev_max;
	return 0;
}

//setlocale(LC_ALL, "Rus");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//
//cin.get();
//cout << "\n Press Enter";
//cin.get();
