#include "../std_lib_facilities.h"

int main() {
	string operation;
	double opd1;
	double opd2;
	bool tof = false;
	cout << "This is a calculator. Please type in your operation, then the two operands, with spaces in between. ";
	do {
		cin >> operation;
		cin >> opd1;
		cin >> opd2;
		if (operation == "+") {
			cout << opd1+opd2 << "\n";
		} else if (operation == "-") {
			cout << opd1-opd2 << "\n";
		} else if (operation == "*") {
			cout << opd1*opd2 << "\n";
		} else if (operation == "/") {
			cout << opd1/opd2 << "\n";
		} else {
			cout << "Not valid. Please try again. ";
			tof = true;
		};
	} while (tof == true);
};