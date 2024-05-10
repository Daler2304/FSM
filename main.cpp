#include "FSM.h"

int main() {
	setlocale(LC_ALL, "ru-RU");
	
	cout << "¬ведите строку состо€щий из 0 и 1: ";
	string input;
	cin >> input;
	
	FSM fsm;
	fsm.checkString(input);
	
	
	return 0;
}