/*****************************************************
**Name:		Jeannie Ramelb
**Date:		December 20, 2018
**Description:	Chapter 4 Problem 11
**				This is a calculator that either calculates the area of a circle,
**				rectangle, or triangle. 
*******************************************************/

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
	double radius, length, width, base, height = 0;

	displayMenu();
	int choice = getChoice(MIN_VALUE, MAX_VALUE);
	do {
		
		if (choice == 1) {
			cout << "Enter radius of the circle " << endl;
			cin.clear();
			cin.ignore();
			cin >> radius;
			cout << "Area of the circle is: " << 3.14159*radius*radius << endl;
		}
		if (choice == 2) {

			cout << "Enter length of the rectangle " << endl;
			cin.clear();
			cin.ignore();
			cin >> length;
			while (length < 0.0) {
				cout << "Please enter positive number for length ";
				cin >> length;
			}

			cout << "Enter width of the rectangle" << endl;
			cin.clear();
			cin.ignore();
			cin >> width;
			while (width < 0.0) {
				cout << "Please enter positive number for width ";
				cin >> width;
			}
			cout << "Area of rectangle is: " << length * width << endl;
			
		}
		if (choice == 3) {
			cout << "Enter base of triangle " << endl;
			cin.clear();
			cin.ignore();
			cin >> base;
			while (base < 0.0) {
				cout << "Please enter positive number for base ";
				cin >> base;
			}
			cout << "Enter height of triangle" << endl;
			cin.clear();
			cin.ignore();
			cin >> height;
			while (height< 0.0) {
				cout << "Please enter positive number for height ";
				cin >> height;
			}
			cout << "Area of triangle is: " << 0.5*height*base << endl;

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
	cout << "\n\nGeometry Calculator\n\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n\n";
	cout << "Enter your choice (1-4):";
	
}

/************************************************
**Description:: getChoice()
**This function get, valiates, and returns the user's choice
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
