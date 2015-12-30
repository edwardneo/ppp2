#include "../std_lib_facilities.h"

int main() {
	string operation;
	string opd1_s;
	string opd2_s;
	bool tof = false;
	double opd1;
	double opd2;
	cout << "This is a calculator. Please type in your operation, then the two operands, with spaces in between. ";
	do {
		cin >> operation >> opd1_s >> opd2_s;
		opd1 = stod(opd1_s);
		opd2 = stod(opd2_s);
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