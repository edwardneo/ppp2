#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter your first name, last name, and age (followed by 'enter'):\n";
	string first_name;
	string second_name;
	double age;
	cin >> first_name >> second_name >> age;
	double months = age*12;
	
	cout << "Hello, " << first_name << " " <<second_name << ". You are " << months <<" months old, right?\n";
}