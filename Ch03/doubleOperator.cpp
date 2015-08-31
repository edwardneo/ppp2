#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter a integer to do operations to: ";
	int n;
	int a;
	cin >> n;
	cout << "n = " << n
		 << "\n\nn+1 = " << n+1
		 << "\ntwice n = " << n+n
		 << "\nthree times n = " << 3*n
		 << "\nhalf of n = " << n/2
		 << "\nn squared = " << n*n
		 << "\nsquare root of n = " << sqrt(double (n))
		 << "\n\nPlease choose a integer to add to n, subtract from n, multiply to n, divide into n, or to find the remander when dividing: "
		 << "\n";
	cin >> a;
	cout << "a = " << a
		 << "\na added to n = " << n+a
		 << "\na taken away from n = " << n-a
		 << "\na multiplied by n = " << n*a
		 << "\nn divided by a = " << double(n)/a
		 << "\nn divided by a remainder = " << n%a
		 << "\n";
}