#include "FSM.h"

int main() {
	setlocale(LC_ALL, "ru-RU");
	
	cout << "Enter a string containing 0 and 1: ";
	string input;
	cin >> input;
	
	FSM fsm;
	fsm.checkString(input);
	
	
	return 0;
}
