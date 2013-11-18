#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Init starting values
	int temp;	//Using this value to store user input temporarily in the menu
	//Load existing flash cards from file
	//Output user interface
	cout << "Welcome to Virtual Flash Cards\n\n";
	cout << "To get started please choose a menu option below:\n";
	cout << "1)Create a list\n";
	cout << "2)Practice\n";
	cout << "3)Edit a list\n";
	cout << "4)Exit\n";
	cout << "\nOption: ";

	cin >> temp;

	switch(temp)
	{
		case 1:
			cout << "Picked 1\n";
			break;
		case 2:
			cout << "Picked 2\n";
			break;
		case 3:
			cout << "Picked 3\n";
			break;
		case 4:
			cout << "Goodbye\n";
			break;
		default:
			cout << "Invalid input\n";
			break;
	}

	return 0;
}
