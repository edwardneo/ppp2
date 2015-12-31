#include "../std_lib_facilities.h"

double sum(const vector<double>& v) {
	double sumofnum = 0.0;
	for (double i:v) {
		sumofnum += i;
	};
	return sumofnum;
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
		if (unit == "cm") {
			int1 *= cmtom;
		} else if (unit == "in") {
			int1 *= intom;
		} else if (unit == "ft") {
			int1 *= fttom;
		} else if (unit != "m"){
			cout << "That is not a valid measurement.\n";
			continue;
		}
		meters.push_back(int1);
		sort(meters);

		cout << "The smallest number so far is " << meters[0] << " meters. The largest number so far is " << meters[meters.size()-1] << " meters. Your number is " << int1 << " meters.\n";		

		if (int1 == meters[meters.size()-1]) {
			cout << "That's the largest number yet!\n";
		} else if (int1 == meters[0]) {
			cout << "That's the smallest number yet!\n";
		}
	};
	vector<double> v;
	double s = sum(v);
	cout << "\nThe smallest value is " << meters[0] << " meters.\nThe largest value is " << meters[meters.size()-1] << " meters.\nThe number of values that were inputed is " << meters.size() << " values.\nThe sum of all the values is " << sum(meters) << ".\n";
}