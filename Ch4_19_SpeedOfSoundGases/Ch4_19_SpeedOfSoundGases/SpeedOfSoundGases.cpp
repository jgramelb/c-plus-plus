/******************************************************
**Name:     Jeannie Ramelb
**Date:     December 20, 2018
**Description:  Chapter 4 Problem 18. Speed of Sound
******************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void displayMenu();
int getChoiceMenu(int, int);
int getChoiceSec(int, int);


int main()
{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 5;
	const int MIN_SEC = 0;
	const int MAX_SEC = 30;
	

	displayMenu();
	int choice = getChoiceMenu(MIN_VALUE, MAX_VALUE);
	int choiceSec = 0;
	double distanceMedium = 0.0;

	do {

		if (choice == 1) {
			cout << "Enter the number of seconds a sound will travel through Carbon Dioxide " << endl;
			choiceSec = getChoiceSec(MIN_SEC, MAX_SEC);
			distanceMedium = choiceSec * 258.0;

			cout << "The source of the sound was " << distanceMedium <<
				" meters away from the detection location \n\n" << endl;
		}
		if (choice == 2) {
			cout << "Enter the number of seconds a sound will travel through Air" << endl;
			choiceSec = getChoiceSec(MIN_SEC, MAX_SEC);
			distanceMedium = choiceSec * 331.50;

			cout << "The source of the sound was " << distanceMedium <<
				" meters away from the detection location \n\n" << endl;
		}
		if (choice == 3) {
			cout << "Enter the number of seconds a sound will travel through Helium" << endl;
			choiceSec = getChoiceSec(MIN_SEC, MAX_SEC);
			distanceMedium = choiceSec * 972.0;

			cout << "The source of the sound was " << distanceMedium <<
				" meters away from the detection location \n\n" << endl;
		}
		if (choice == 4) {
			cout << "Enter the number of seconds a sound will travel through Hydrogen" << endl;
			choiceSec = getChoiceSec(MIN_SEC, MAX_SEC);
			distanceMedium = choiceSec * 1270.0;

			cout << "The source of the sound was " << distanceMedium <<
				" meters away from the detection location \n\n" << endl;
		}
		if (choice == 5) {
			cout << "The program will now end " << endl;
		}
	} while (choice != 5);

	return 0;

}

/***********************************************
**Description: displayMenu()
**This function displays the user's menu on the screen
**********************************************/
void displayMenu()
{
	cout << "\n\nGThe Speed of Sound in Gases\n\n";
	cout << "This program calculates how far away (in meters) the source  \n"
		<< "of the sound was from the detection location. \n\n";
	cout << "Medium: " << endl;
	cout << "1. Carbon Dioxide\n";
	cout << "2. Air\n";
	cout << "3. Helium\n";
	cout << "4. Hydrogen\n";
	cout << "5. Quit \n\n";
	cout << "Enter your choice (1-5):";

}

/************************************************
**Description:: getChoiceMenu()
**This function get, validates, and returns the user's choice for Menu
*************************************************/
int getChoiceMenu(int min, int max)
{
	int choice;
	cin.clear();
	cin >> choice;

	while (!cin || choice < min || choice > max)
	{
		cout << "Choice must be between " << min << " and " << max << ". \n"
			<< "Please re-enter choice: ";
		cin.clear();
		cin.ignore();
		cin >> choice;

	}
	return choice;
}

/************************************************
**Description:: getChoiceSec()
**This function get, validates, and returns the user's choice for seconds
*************************************************/
int getChoiceSec(int min, int max)
{
	int choiceSec;
	cin.clear();
	cin >> choiceSec;

	while (!cin || choiceSec < min || choiceSec > max)
	{
		cout << "Choice must be between " << min << " and " << max << ". \n"
			<< "Please re-enter an integer for seconds: ";
		cin.clear();
		cin.ignore();
		cin >> choiceSec;

	}
	return choiceSec;
}
