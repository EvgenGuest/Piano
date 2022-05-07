#include <iostream>
#include "windows.h"
#include "Functions.h"
#include <string>
#include <conio.h>
#include <fstream>
#include <map>

//Заполнение массива символами
void fill(char* arr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i == 0||i<n-1) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 14 || j == 15 || j == 16 || j == 17 || j == 18 || j == 21 || j == 22 || j == 23 || j == 24 || j == 25 || j == 28 || j == 29 || j == 30 || j == 31 || j == 32 || j == 35 || j == 36 || j == 37 || j == 38 || j == 39 || j == 42 || j == 43 || j == 44 || j == 45 || j == 46))
				arr[i][j] = '*';
			else
				if ((i < n - 3) && (j == 0 || j == 4 || j == 7 || j == 11 || j == 14 || j == 18 || j == 21 || j == 25 || j == 28 || j == 32 || j == 35 || j == 39 || j == 42 || j == 46))
					arr[i][j] = '*';				
					else
						arr[i][j] = ' ';
		}
	}
}

//Заролнение массива символами
void fill2(char* arr[], int n, int m) {
	for (int i = 1; i < n - 2; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0 || j == 4 || j == 7 || j == 11 || j == 14 || j == 18 || j == 21 || j == 25 || j == 28 || j == 32 || j == 35 || j == 39 || j == 42 || j == 46)
				arr[i][j] = '*';
			else
				arr[i][j] = ' ';
		}
	}
}

//Заполнение массива Буквами соответствующей клавиши
void abc(char* arr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i == n - 1) && (j == 2))
				arr[i][j] = 'Z';
			if ((i == n - 1) && (j == 9))
				arr[i][j] = 'X';
			if ((i == n - 1) && (j == 16))
				arr[i][j] = 'C';
			if ((i == n - 1) && (j == 23))
				arr[i][j] = 'V';
			if ((i == n - 1) && (j == 30))
				arr[i][j] = 'B';
			if ((i == n - 1) && (j == 37))
				arr[i][j] = 'N';
			if ((i == n - 1) && (j == 44))
				arr[i][j] = 'M';
		}
	}
}

//Вывод массива в консоль
void show(char* arr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}
}

/*void dotFill() {
	char sym;
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 4; j++){
			if(field[i][j]==' ')
				Sleep(500);
			std::cout << ".";
		}
	}	*/

	/*while (true) {
		if (_kbhit()) {
			sym = _getch();
			//system("cls");
			Sleep(100);
			std::cout << ".";
		}
	}
}*/