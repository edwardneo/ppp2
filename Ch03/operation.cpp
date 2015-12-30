#include "../std_lib_facilities.h"

int main() {
	string operation;
	double opd1;
	double opd2;
	bool tof = true;
	cout << "This is a calculator. Please type in your operation, then the two operands, with spaces in between. ";
	while (tof == true) {
		cin >> operation;
		cin >> opd1;
		cin >> opd2;
		if (operation == "+") {
			cout << opd1+opd2 << "\n";
			tof = false;
		} else if (operation == "-") {
			cout << opd1-opd2 << "\n";
			tof = false;
		} else if (operation == "*") {
			cout << opd1*opd2 << "\n";
			tof = false;
		} else if (operation == "/") {
			cout << opd1/opd2 << "\n";
			tof = false;
		} else {
			cout << "Not valid. Please try again. ";
		};
	};
};