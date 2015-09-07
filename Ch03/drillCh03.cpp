#include "../std_lib_facilities.h"

int main() {
	string myName;
	string firstName;
	string friendName;
	int age;
	char friendGender;

	cout << "Enter your first name:\n";
	cin >> myName;

	cout << "Enter the name of the person you want to write to:\n";
	cin >> firstName;

	if (firstName == "Eli" and myName == "Edward") {
			cout << "Dear " << firstName << ",\n"
				 << "I hope your having fun with your new toy. I prefer to count from left to right line by line. "
				 << "Also, your dad and mom know a lot. Listen to them. So, do you like school? Are you going to learn how to swim? "
				 << "I think you will have fun learning how to swim\n"
				 << "Now, more about me. I am having fun learning about C++, the coding language, but I still have a lot to learn. "
				 << "My school is fun but I have a lot of homework, being in 7th grade. "
				 << "Now I like to play battle cats and bloons monkey city. You should try those games. "
				 << "You like battle cats. Anyway, wish you good luck.\n"
				 << "Sincerely,\n"
				 << "Edward Neo Lee (Eddie)\n";
	}

	else {
		cout << "Enter a friend of the recipient's name and gender (m or f):\n";
		cin >> friendName >> friendGender;

		cout << "Enter the recipient's age:\n";
		cin >> age;

		cout << "Dear " << firstName << ",\n"
			 << "  How are you? I am fine. Hope you still remember me. Have you seen " << friendName << " lately? ";

		if (friendGender == 'm') {
			cout << "If you see " << friendName << " please ask him to call me. ";
		}
		else {
			cout << "If you see " << friendName << " please ask her to call me. ";
		}

		cout << "I hear you just had a birthday and you are " << age << " years old! ";

		if (age <= 0 or age >= 110) {
			simple_error("You're kidding!!!");
		}

		if (age < 12) {
			cout << "Next year you will be " << age + 1 << " years old!";
		}

		if (age == 17) {
			cout << "Next year you will be able to vote!";
		}

		if (age > 70) {
			cout << "I hope you are enjoying your retirement.";
		}

		cout << "\nYours sincerely,\n\n" << myName << "\n";
	}
}