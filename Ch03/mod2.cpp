#include "../std_lib_facilities.h"

int main() {
	int num;
	bool goOn = false;
	cout << "Choose a number under two billion but over negative two billion. ";

	do {
		cin >> num;
		if (num > 2000000000 || num < -2000000000) {
			cout << "That integer is not valid. Please try again. ";
		} else {
			goOn=true;
		}
	} while (goOn==false);

	if (num%2==0) {
		cout << "The integer, " << num << ", is even.\n";
	} else {
		cout << "The integer, " << num << ", is odd.\n";
	};

};