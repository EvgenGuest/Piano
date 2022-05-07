#include <iostream>
#include "windows.h"
#include "Functions.h"
#include <string>
#include <conio.h>
#include <fstream>
#include <map>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int rows = 12, colums = 47;
	char field[rows][colums] = { ' ' };
	   
	char sym = '1';	
	cout << "Приветствую Вас в эмуляторе фортепиано!\n\n";
	cout << "Играйте клавишами Z X C V B N M" << "\n";
	cout << "Kлавиша Q - для выхода." << "\n\n";

	char* arr[rows];
	for (int i = 0; i < rows; i++)
		arr[i] = field[i];
	
	fill(arr, rows, colums);
	fill2(arr, rows, colums);	
	abc(arr, rows, colums);
	show(arr, rows, colums);	

	 while(sym !='Q'&& sym != 'q') {
			sym = _getch();
			switch(sym) {							
			case 'Z': case 'z': Beep(523, 500);  break;
			case 'X': case 'x': Beep(587, 500);  break;
			case 'C': case 'c': Beep(659, 500);  break;
			case 'V': case 'v': Beep(698, 500);  break;
			case 'B': case 'b': Beep(783, 500);  break;
			case 'N': case 'n': Beep(880, 500);  break;
			case 'M': case 'm': Beep(987, 500);  break;
			}					
			//Sleep(10);
			//system("cls");
	 }  

	return 0;
}