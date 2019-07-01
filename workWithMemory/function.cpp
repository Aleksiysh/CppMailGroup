#include "function.h"

int strcmp(const char * str1, const char * str2)
{
	while (*str1 == *str2 && *str1) {
		str1++, str2++;
	}
	return *str1 - *str2;
}

int findmax(int * arr, int count)
{
	int idx = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] > idx) idx = i;
	}
	return idx;
}

int getmax2(const int * arr, int count)
{
	int prev_max = arr[0]; int curr_max = arr[1];
	if (prev_max > curr_max) { prev_max = arr[1]; curr_max = arr[0]; }
	for (int i = 2; i < count; ++i) {
		if (arr[i] > curr_max) {
			prev_max = curr_max; curr_max = arr[i];
		}
	}
	return prev_max;
}

