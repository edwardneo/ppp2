#include "../std_lib_facilities.h"

int main() {
	string applicant;
	string interviewer;
	string time_;
	cout << "Enter the applicant's name: \n";
	cin >> applicant;
	cout << "Enter the interviewer's name: \n";
	cin >> interviewer;
	cout << "Enter the appointment time: \n";
	cin >> time_;
	cout << interviewer << " will interview " << applicant << " at " << time_ << "\n";
}