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
	   
	char sym = '1';	
    	
	 do {		
		cout << "Приветствую Вас в эмуляторе фортепиано!\n\n";
		cout << "Играйте клавишами Z X C V B N M" << "\n";
		cout << "Kлавиша Q - для выхода." << "\n\n";

		keys();		

			sym = _getch();
			switch(sym) {			
			case 'Z': case 'z': Beep(32.703, 10);  break;
			case 'X': case 'x': Beep(36.708, 10);  break;
			case 'C': case 'c': Beep(41.203, 10);  break;
			case 'V': case 'v': Beep(43.654, 10);  break;
			case 'B': case 'b': Beep(48.999, 10);  break;
			case 'N': case 'n': Beep(55, 10);  break;
			case 'M': case 'm': Beep(61.735, 10);  break;
			}					
			Sleep(100);
			system("cls");

	 } while (sym != 'Q' && sym != 'q');  
   

	return 0;
}