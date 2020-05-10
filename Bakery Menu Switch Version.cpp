//This program lets the customer select options from the menu to order and display the final price along with the order.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){ 
	//Sets the numbers in the program to a decimal value of three.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << left;

	char reorder; //Customer adds order or not.
	int choice, a = 0, b = 0, c = 0, d = 0;
	bool again = false;

	cout << "WELCOME TO THE NEIGHBOURHOOD BAKERY!" << endl << endl;
	cout << "What would you like today?" << endl << endl;

	//Runs loop until the again variable turns true. ("reorder" character).
	while (again == false)
	{
		//Main menu for customer.
		cout << setw(55) << "CHOICE" << "PRICE" << endl;
		cout << setw(55) << "1: Coffee" << "$1.99" << endl;
		cout << setw(55) << "2: Coffee & Muffin" << "$4.99" << endl;
		cout << setw(55) << "3: Coffee & Muffin & Scone" << "$7.99" << endl;
		cout << setw(55) << "4: Coffee & Muffin & Scone & Fruit" << "$10.99" << endl << endl;

		//Asks customer for input.
		cout << "What would you like to order? (Option 1, 2, 3, or 4)" << endl;
		cin >> choice;
		cout << endl;

		//Starts switch statement to see which option user has selected
		switch (choice)
		{
		case 1: 
			a++; //increments the selected option.
			cout << "You have selected option 1. This includes: \n" << "Coffee \n" << endl; //displays text to show what customer has ordered.
			break;
		case 2: 
			b++;
			cout << "You have selected option 2. This includes: \n" << "Coffee \n" << "Muffin \n" << endl;
			break;
		case 3: 
			c++;
			cout << "You have selected option 3. This includes: \n" << "Coffee \n" << "Muffin \n" << "Scone \n" << endl;
			break;
		case 4: 
			d++;
			cout << "You have selected option 4. This includes: \n" << "Coffee \n" << "Muffin \n" << "Scone \n" << "Fruit \n" << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
		}

		//reorder variable triggers loop depending on customers input.
		cout << "Would you like to order anything else? (Y or N)" << endl;
		cin >> reorder;
		system("CLS");
		if (reorder == 'y' || reorder == 'Y')
			again = false;
		else if (reorder == 'n' || reorder == 'N')
			again = true;
	}

	//Final order summary display.
	cout << "The final bill for today's purchase is (including all your totals)" << endl;
	cout << setw(15) << "Special #1" << a << endl; //displays texts and incremented value of the option.
	cout << setw(15) << "Special #2" << b << endl;
	cout << setw(15) << "Special #3" << c << endl;
	cout << setw(15) << "Special #4" << d << endl << endl;
	cout << "The total is $" << ((a*1.99) + (b*4.99) + (c*7.99) + (d*10.99))*1.13 << endl << endl; //calculations for final price.

}