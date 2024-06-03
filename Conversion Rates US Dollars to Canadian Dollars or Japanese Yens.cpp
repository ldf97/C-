#include <iostream>
using namespace std;
int main()
{
	//Create variables for the currency values
	float unitedStatesDollar;
	float canadianDollar;
	float japaneseYen; 
	
	//create "convertedValue" which is used to Select which one to use
	float convertedValue;
	// similar to convertedValue, picks the name as a String
	string convertedValueName;

	//Create "outputValue" which stores the final calculation for the conversion
	float outputValue;

	//holds various ints based on user choices
	int choice;
	int startRange;
	int endRange;
	int incrementAmount;

	// holds conversion rates. in a more advanced program, these could be programmatically assigned by pulling them from the internet.
	unitedStatesDollar = 1.0;
	canadianDollar = 1.3630;
	japaneseYen = 156.9000; 
	convertedValue = 0;

	//Ask the user what type of conversion they need (US->Canadian or US-->Yen)
	cout << "Would you like to:\n" << "1. Convert US Dollars to Canadian Dollars.\n" << "2. Convert US Dollars to Japanese Yens.\n";
	cout << "Enter 1 or 2. ";
	cin >> choice;
	
	// User input validation. If the user doesn't pick one AND the user doesn't pick two, close program.
	if ((choice != 1) && (choice != 2)) {
		cout << "Please pick US dollars to Canadian Dollars, or US Dollars to Yens.\n";
		return 0;
	}
	
	// Establish the conversion. If choice is 1, Canadian conversion. If choice 2, Japanese Yen conversion
	if (choice == 1) {
		convertedValue = canadianDollar;
		convertedValueName = "Canadian: ";
	}
	else {
		convertedValue = japaneseYen;
		convertedValueName = "Yens: ";
	}

	// Request the Start Range and End range and increment to increase by
	cout << "Enter US dollar start range.\n";
	cin >> startRange;
	cout << "Enter US dollar end range.\n";
	cin >> endRange;
	cout << "And the dollar increment amount? \n";
	cin >> incrementAmount;
	
	
	//Use a while loop (saves a lot of time) to print out increments of each dollar conversion amount
	while (startRange < endRange) {
		outputValue = convertedValue * startRange;
		cout << "US: " << startRange << "		" << convertedValueName << outputValue << endl;
		startRange = startRange + incrementAmount;
	}

}
//
//To Do :
//Write a program to convert from US Dollars to Canadian Dollars or Japanese Yens.You can find the current exchange rates at https ://www.federalreserve.gov/releases/h10/current/

//Notes:
//The program should also prompt the user for 3 integers, 
// corresponding to the range of currency amounts(start / end) as well as a increment amount.
//You MUST use a while loop in this program for the calculation / display of the various currencies.