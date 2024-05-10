#pragma once
#include<iostream>
#include<fstream>
#include<json/json.h>
using js = Json::Value;
using namespace std;

class FSM {
private:
	js root;
	string currentState;
	string state[3] = {"start", "one", "two"};
	int index = 0;
public:
	FSM();
	void checkString(string& text);
};
