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
int getChoice(int, int);


int main()
{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 4;
	double feetAir, secAir, feetWater, secWater, feetSteel, secSteel;

	displayMenu();
	int choice = getChoice(MIN_VALUE, MAX_VALUE);
	do {

		if (choice == 1) {
			cout << "Enter the number of feet a sound will travel through air " << endl;
			cin.clear();
			cin.ignore();
			cin >> feetAir;
			while (feetAir < 0.0) {
				cout << "Please enter a positive number for the distance. ";
				cin >> feetAir;
			}
			secAir = feetAir / 1100;
			cout << "Time it will take for sound to travel " << feetAir <<
				" feet through air is: " << secAir << "\n\n" <<  endl;
		}
		if (choice == 2) {

			cout << "Enter the number of feet a sound will travel through water " << endl;
			cin.clear();
			cin.ignore();
			cin >> feetWater;
			while (feetWater < 0.0) {
				cout << "Please enter a positive number for the distance. ";
				cin >> feetWater;
			}
			secWater = feetWater / 4900;
			cout << "Time it will take for sound to travel " << feetWater <<
				" feet through air is: " << secWater  << "\n\n" << endl;

		}
		if (choice == 3) {
			cout << "Enter the number of feet a sound will travel through steel" << endl;
			cin.clear();
			cin.ignore();
			cin >> feetSteel;
			while (feetSteel < 0.0) {
				cout << "Please enter a positive number for the distance. ";
				cin >> feetSteel;
			}
			secSteel = feetSteel / 1100;
			cout << "Time it will take for sound to travel " << feetSteel <<
				" feet through air is: " << secSteel << "\n\n" << endl;

		}
		if (choice == 4) {
			cout << "The program will now end " << endl;
		}
	} while (choice != 4);

	return 0;

}

/***********************************************
**Description: displayMenu()
**This function displays the user's menu on the screen
**********************************************/
void displayMenu()
{
	cout << "\n\nGThe Speed of Sound\n\n";
	cout << "This program calculates the time it takes for\n"
		<< "for the speed of sound based on the medium chosen. \n\n";
	cout << "1. Air\n";
	cout << "2. Water\n";
	cout << "3. Steel\n";
	cout << "4. Quit\n\n";
	cout << "Enter your choice (1-4):";

}

/************************************************
**Description:: getChoice()
**This function get, validates, and returns the user's choice
*************************************************/
int getChoice(int min, int max)
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
