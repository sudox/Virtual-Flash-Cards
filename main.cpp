#include <iostream>
#include <string>
#include <Card.hpp>
#include <Deck.hpp>
using namespace std;

void printMenu()
{
	cout << "Welcome to Virtual Flash Cards\n\n";
	cout << "To get started please choose a menu option below:\n";
	cout << "1) Create a list\n";
	cout << "2) Practice\n";
	cout << "3) Edit a list\n";
	cout << "4) Exit\n";
	cout << "\nInput: ";
}

//Why doesn't C++ have a better way of doing this!
void clearScreen()
{
	cout << string(100, '\n');
}

void createList()
{

}

void practice()
{

}

void editList()
{

}

int main()
{
	//TODO:Init starting values
	int temp;	//Using this value to store user input temporarily in the menu
	//TODO:Load existing flash cards from file
	//Output user interface
	for(;;)
	{
		printMenu();

		cin >> temp;

		switch(temp)
		{
			case 1:
				createList();
				break;
			case 2:
				practice();
				break;
			case 3:
				editList();
				break;
			case 4:
				cout << "Goodbye\n";
				return 0;
				break;
			default:
				cout << "Invalid input\n";
				break;
		}
		clearScreen();
	}
}
