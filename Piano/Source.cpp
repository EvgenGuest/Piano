#include <iostream>
#include "windows.h"
#include "Functions.h"
#include <string>
#include <conio.h>
#include <fstream>
#include <map>
using namespace std;

int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Приветствую Вас в эмуляторе фортепиано!\n\n";
	cout << "Играйте клавишами Z X C V B N M" << "\n";
	cout << "Kлавиша Q - для выхода." << "\n\n";

	char sym = '1';
	const int n = 11;
	const int m = 59;
	int arr[n][m];	
    

	keys(arr);   
    	
	while (sym != 'Q' && sym != 'q') {
		if (_kbhit()) {
			sym = _getch();
			switch(sym) {
            case 'Z': case 'z': Beep(32.703, 10); cout << "."; break;
			case 'X': case 'x': Beep(36.708, 10); cout << "."; break;
			case 'C': case 'c': Beep(41.203, 10); cout << "."; break;
			case 'V': case 'v': Beep(43.654, 10); cout << "."; break;
			case 'B': case 'b': Beep(48.999, 10); cout << "."; break;
			case 'N': case 'n': Beep(55, 10); cout << "."; break;
			case 'M': case 'm': Beep(61.735, 10); cout << "."; break;
			}			
			Sleep(100);			
		}		

	}  
    
   

	return 0;
}