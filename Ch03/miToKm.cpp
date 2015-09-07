#include "../std_lib_facilities.h"

int main() {
	double miles;
	int km;
	double km2;

	cout << "Enter a value in miles:\n";
	cin >> miles;

	km = miles * 160.9;
	km2 = km / 100.0;
	cout << miles << " miles is about " << km2 << " kilometers.\n";
}