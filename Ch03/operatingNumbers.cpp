#include "../std_lib_facilities.h"

int main(){
	int val1;
	int val2;
	int smaller1;
	int larger1;
	int sum1;
	int difference1;
	int product1;
	string ratio1;

	double dou1;
	double dou2;
	double smaller2;
	double larger2;
	double sum2;
	double difference2;
	double product2;
	string ratio2;

	cout << "Name two integers:\n";
	cin >> val1 >> val2;

	cout << "Name two doubles:\n";
	cin >> dou1 >> dou2;

	if (val1 < val2) {
		smaller1 = val1;
		larger1 = val2;
	}

	else {
		smaller1 = val2;
		larger1 = val1;
	}

	sum1 = smaller1 + larger1;
	difference1 = larger1 - smaller1;
	product1 = smaller1 * larger1;
	if (smaller1 == 0) {
		ratio1 = "Invalid";
	}
	else {
		ratio1 = larger1 / smaller1;
	}


	if (dou1 < dou2) {
		smaller2 = dou1;
		larger2 = dou2;
	}

	else {
		smaller2 = dou2;
		larger2 = dou1;
	}

	sum2 = smaller2 + larger2;
	difference2 = larger2 - smaller2;
	product2 = smaller2 * larger2;
	if (smaller2 == 0) {
		ratio2 = "Invalid";
	}
	else {
		ratio2 = larger2 / smaller2;
	}

	cout << "Integer:"
		 << "\nSmaller = " << smaller1
		 << "\nLarger = " << larger1
		 << "\nSum = " << sum1
		 << "\nDifference = " << difference1
		 << "\nProduct = " << product1
		 << "\nRatio = " << ratio1;

	cout << "\n\nDouble:"
		 << "\nSmaller = " << smaller2
		 << "\nLarger = " << larger2
		 << "\nSum = " << sum2
		 << "\nDifference = " << difference2
		 << "\nProduct = " << product2
		 << "\nRatio = " << ratio2 << "\n";
}