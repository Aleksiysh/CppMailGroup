#pragma once

/*Индекс максимального элемента массива*/
int findmax(int * arr, int count);
/*второй максимальный элемента*/
int getmax2(const int *arr, int count);

/*сравнение строк*/
int strcmp(const char *str1, const char * str2); 
/*копирование строк*/
char * strcpy(char * str1, const char * str2);
/*конкатенация строк*/
char * strcat(char *str1, const char* str2);
/*длина строки*/
int strlen(const char* str);

/*поиск адреса подстроки*/
char * substr(char * str, char *sub);
/*поиск символа в стрроке*/
char * strchr(const char * str, int ch);


