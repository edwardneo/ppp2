#include "../std_lib_facilities.h"

int main () {
	string sint1;
	string sint2;
	int int1;
	int int2;
	
	while (true) {
		cout << "Type two integers with a space in between. ";
		cin >> sint1 >> sint2;
		if (sint1 == "|" || sint2 == "|") {
			break;
		}
		int1 = stoi(sint1);
		int2 = stoi(sint2);

		if (int1 > int2) {
			cout << "The smaller value is " << int2 << "\nThe larger value is " << int1 << "\n";
		} else if (int1 < int2) {
			cout << "The smaller value is " << int1 << "\nThe larger value is " << int2 << "\n";
		} else {
			cout << "The values are equal.\n";
		}
	};
}