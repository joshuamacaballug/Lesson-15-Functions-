# Lesson-15-Functions-
#include <iostream>
using namespace std;

void greetings(int age) {
	if (age >= 16 && age <= 22) {

		cout << "You are eligible to enter the mall.\n";
		cout << "Would you like to visit the mall? Y/N\n";
		char input;
		cin >> input;
		switch (input) {
		case 'Y': {
			cout << "Alright! enjoy your hangout!";
			break; }
		case 'N': {
			cout << "Alright! Cancelled.";
			break;
		}
		default:
			cout << "Incorrect command";
		}
	}
	else if (age >= 23 && age <= 30) {
		cout << "Your age is eligible to travel Hawaii.\n";
		cout << "Would you like to travel Hawaii?\n";
		char input;
		cin >> input;
		switch (input) {
		case 'Y': {
			cout << "Alright! enjoy your trip!";
			break; }
		case 'N': {
			cout << "Alright! Cancelled.";
			break;
		}
		}
	}
	else
		cout << "you are not eligible to participate.";
}
int main() {
	cout << "Please state your age:\n" << endl;
	int userInput;
	cin >> userInput;
	greetings(userInput);
}
