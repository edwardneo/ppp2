#include "../std_lib_facilities.h"

int main () {
	string digit;
	cout << "What digit from 0-4 inclusive spelled out would you like to change into a digit? ";
	cin >> digit;
	locale loc;
  	for (string::size_type i=0; i<digit.length(); ++i) {
    	digit[i] = tolower(digit[i],loc);
    }
	if (digit == "zero") {
		cout << "0\n";
	} else if (digit == "one") {
		cout << "1\n";
	} else if (digit == "two") {
		cout << "2\n";
	} else if (digit == "three") {
		cout << "3\n";
	} else if (digit == "four") {
		cout << "4\n";
	} else {
		cout << "This is not a number I know.\n";
	}
};