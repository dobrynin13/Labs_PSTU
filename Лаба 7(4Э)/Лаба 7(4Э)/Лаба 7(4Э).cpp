#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
#include <string.h>
void turn_str(char str[]); //переворачивает четные слова в строке

using namespace std;

void turn_str(char str[])
{
	int count = 1, i_first, i_last, j, k;
	char temp;
	for (int i = 0; i < 100; i++) {
		//если конец строки, то выходим
		if (str[i] == '\0') {
			break;
		}
		//если пробел, то ведем их счет
		if (str[i] == ' ') {
			count++;
			//после каждого четного пробела
			if (!(count % 2)) {
				//сохраняем левую границу слова
				i_first = i + 1;
				j = i_first;
				//находим правую границу
				while (str[j] != ' ' && str[j] != '\0') {
					j++;
				}
				i_last = j - 1;
				//меняем буквы местами начиная с границ к центру
				if (i_first != i_last) {
					for (j = i_first, k = 0; j < (i_last - i_first + 1) / 2 + i_first; j++, k++) {
						temp = str[j];
						str[j] = str[i_last - k];
						str[i_last - k] = temp;
					}
				}
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "rus");
	char str[100] = "Ехал грека через реку";

	cout << "Строка до изменений: " << str << endl;
	turn_str(str); //переворачиваем четные слова
	//результат
	cout << "Результат: " << str << endl;


	
	fflush(stdin);

	return 0;
}