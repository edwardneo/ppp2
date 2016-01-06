#include "../std_lib_facilities.h"

double sum(const vector<double>& v) {
    double sumofnum = 0.0; 
    for (double i:v) {
        sumofnum += i;
    };
    return sumofnum;
}

double median(const vector<double>& v) {
	if (v.size()%2 == 0) {
		return (v[v.size()/2-1]+v[v.size()/2])/2;
	} else  {
		return v[(v.size()-1)/2];
	}
}

int main () {
	vector<double> numbers;
	cout << "Please enter a few values. ";
	for (double number; cin >> number;) {
		numbers.push_back(number);
	}
	sort(numbers);
	cout << "The sum of these numbers is " << sum(numbers) << ".\nThe smallest number is " << numbers[0] << ".\nThe largest number is " << numbers[numbers.size()-1] << "\nThe mean of these numbers is " << sum(numbers)/numbers.size() << ".\nThe median of these numbers is " << median(numbers) << ".\n";
}