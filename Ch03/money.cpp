#include "../std_lib_facilities.h"

int main() {
	int p; //Pennies
	int n; //Nickels
	int d; //Dimes
	int q; //Quarters
	int h; //Half Dollars
	double total;
	bool tof = false;
	string yorn;
	string pm = "pennies.";
	string nm = "nickels.";
	string dm = "dimes.";
	string qm = "quarters.";
	string hm = "half dollars.";
	//m stands for modifier
	string pp;
	string np;
	string dp;
	string qp;
	string hp;
	//p stands for the printed out number

	do {
		tof = false;
		cout << "How many pennies do you have? ";
		cin >> p;
		cout << "How many nickels do you have? ";
		cin >> n;
		cout << "How many dimes do you have? ";
		cin >> d;
		cout << "How many quarters do you have? ";
		cin >> q;
		cout << "How many half dollars do you have? ";
		cin >> h;

		pp = to_string(p);
		np = to_string(n);
		dp = to_string(d);
		qp = to_string(q);
		hp = to_string(h);

		if (p == 1) {
			pm = "penny.";
		} else if (p == 0) {
			pp = "no";
		};
		if (n == 1) {
			nm = "nickel.";
		} else if (n == 0) {
			np = "no";
		};
		if (d == 1) {
			dm = "dime.";
		} else if (d == 0) {
			dp = "no";
		};
		if (q == 1) {
			qm = "quarter.";
		} else if (q == 0) {
			qp = "no";
		};
		if (h == 1) {
			hm = "half dollar.";
		} else if (h == 0) {
			hp = "no";
		};

		cout << "\nYou have " << pp << " " << pm << "\nYou have " << np << " " << nm << "\nYou have " << dp << " " << dm << "\nYou have " << qp << " " << qm << "\nYou have " << hp << " " << hm << "\nIs this correct (y or n)? ";
		cin >> yorn;

		if (yorn == "n") {
			cout << "Sorry. Let's try again.\n";
			tof = true;
		};
	} while (tof == true);
	total = (p+(5*n)+(10*d)+(25*q)+(50*h))/100.0;
	cout << "The value of all your coins is $" << total << ".\n";
}