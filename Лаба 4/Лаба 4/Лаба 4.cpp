/*if (Arr[i] != 0)*/
//Первое задание 

#include <iostream>
#include <time.h>
#include <stdint.h>
#include <ctime>
using namespace std;

void FillArr(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 101 - 50;
	}
}

void PrintArr(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << endl;
	}

}

void PlainArr(int Arr[], const int size) // Поиск простых чисел
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 2; j <= abs(Arr[i]) / 2; j++)
		{
			if (abs(Arr[i]) % j == 0 && abs(Arr[i]) != j)
			{
				Arr[i] = 0;
			}
		}
		for (int j = 3; j <= abs(Arr[i]) / 3; j++)
		{
			if (abs(Arr[i]) % j == 0 && abs(Arr[i]) != j)
			{
				Arr[i] = 0;
			}
		}
		for (int j = 5; j <= abs(Arr[i]) / 5; j++)
		{
			if (abs(Arr[i]) % j == 0 && (Arr[i]) != j)
			{
				Arr[i] = 0;
			}
		}
		for (int j = 7; j <= abs(Arr[i]) / 7; j++)
		{
			if (abs(Arr[i]) % j == 0 && abs(Arr[i]) != j)
			{
				Arr[i] = 0;
			}
		}


	}
}

void IllationArr(int Arr[], const int size) // Вывод простых чисел
{
	cout << "Простые числа: ";
	for (int i = 0; i < size; i++)
	{
		if (Arr[i] != 0)
		{
			cout << Arr[i] << " ";
		}

	}


}

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	const int size = 10;
	int Arr[size];
	FillArr(Arr, size);
	PrintArr(Arr, size);
	PlainArr(Arr, size);
	IllationArr(Arr, size);

}


//Второе задание
/*
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
void f(int arr[10][5], int nRow, int nCol)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100 - 50;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void f1(int arr[10][5], int nRow, int nCol)
{
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5 / 2; j++)
			{
				int tmp = arr[i][j];
				arr[i][j] = arr[i][5 - 1 - j];
				arr[i][5 - 1 - j] = tmp;
			}
			cout << endl;
		}
	}
	
}
void f2(int arr[10][5], int nRow, int nCol)
{
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << arr[i][j] << "\t";
			
		}
		cout << endl;
	}
	
}
    

void main()
{
	srand(time(0));
	 int arr[10][5];
	 f(arr, 10, 5);
	 f1(arr, 10, 5);
	 f2(arr, 10, 5);
}
*/
