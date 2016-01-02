#include "../std_lib_facilities.h"

double sum(const vector<double>& v) {
	double sumofnum = 0.0;
	for (double i:v) {
		sumofnum += i;
	};
	return sumofnum;
}

bool supportedUnit(string unit) {
	vector<string> units = {"m", "cm", "in", "ft"};

	for (string i: units) {
		if (unit == i) {
			return true;
		}
	}
	return false;
}

double conversionFactor(string unit) {
	if (unit == "m") {
		return 1;
	} else if (unit == "cm") {
		return 1.0/100;
	} else if (unit == "in") {
		return 2.54/100;
	} else {
		return 12*2.54/100;
	}
}

int main () {
	string sint1;
	double int1;
	vector<double> meters;

	string unit;
	constexpr double cmtom = 1.0/100;
	constexpr double intom = 2.54/100;
	constexpr double fttom = 12*2.54/100;
	
	while (true) {
		cout << "Type a measurement and a unit (m, cm, in, ft). ";
		cin >> sint1 >> unit;
		if (sint1 == "|") {
			break;
		}
		int1 = stod(sint1);

		if (supportedUnit(unit)) {
    		meters.push_back(int1 *= conversionFactor(unit));
		} else {
    		cout << "That is not a valid measurement.\n";
    		continue;
		}
		sort(meters);

		cout << "The smallest number so far is " << meters[0] << " meters. The largest number so far is " << meters[meters.size()-1] << " meters. Your number is " << int1 << " meters.\n";		

		if (int1 == meters[meters.size()-1]) {
			cout << "That's the largest number yet!\n";
		} else if (int1 == meters[0]) {
			cout << "That's the smallest number yet!\n";
		}
	};

	cout << "\nThe smallest value is " << meters[0] << " meters.\nThe largest value is " << meters[meters.size()-1] << " meters.\nThe number of values that were inputed is " << meters.size() << " values.\nThe sum of all the values is " << sum(meters) << ".\n";
}