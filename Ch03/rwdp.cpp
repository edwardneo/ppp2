#include "../std_lib_facilities.h"
#include <stdio.h>
#include <ctype.h>

int main() {
	string previous = " ";
	string current;
	while (cin>>current) {
		if (current == "")
			return 0;
		if (previous == current)
			cout << "repeated word:" << current << "\n";
		previous = current;
		
	return 0;
	}
}