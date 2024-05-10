#include "FSM.h"

FSM::FSM() {
    ifstream file("state.json");

    if (!file.is_open()) {
        cerr << "Can't open file" << endl;
        return;
    }

    file >> root;
    currentState = root[state[index]]["0"].asString();
}

void FSM::checkString(string& text) {
    for (char& c : text) {
        string str = string(1, c);
        currentState = root[state[index]][str].asString();
        if (str == "1" && index < 2) {
            index++;
        }
        else {
            index = 0;
        }
        cout << currentState << endl;
        if (currentState == "two") { break; }
    }

    if (currentState == state[2]) {
        cout << "the string contains 11" << endl;
    }
    else {
        cout << "The string does not contain 11" << endl;
    }
}
