#include <iostream>
using namespace std;
int main()
{
	float unitedStatesDollar;
	float canadianDollar;
	float japaneseYen;
	float convertedValue;
	float outputValue;
	string convertedValueName;
	int choice;
	int startRange;
	int endRange;
	int incrementAmount;
	unitedStatesDollar = 1.0;
	canadianDollar = 1.3630;
	japaneseYen = 156.9000;
	convertedValue = 0;
	cout << "Would you like to:\n" << "1. Convert US Dollars to Canadian Dollars.\n" << "2. Convert US Dollars to Japanese Yens.\n";
	cout << "Enter 1 or 2. ";
	cin >> choice;

	
	if ((choice != 1) && (choice != 2)) {
		cout << "Please pick US dollars to Canadian Dollars, or US Dollars to Yens.\n";
		return 0;
	}

	if (choice == 1) {
		convertedValue = canadianDollar;
		convertedValueName = "Canadian: ";
	}
	else {
		convertedValue = japaneseYen;
		convertedValueName = "Yens: ";
	}

	//
	cout << "Enter US dollar start range.\n";
	cin >> startRange;
	cout << "Enter US dollar end range.\n";
	cin >> endRange;
	cout << "And the dollar increment amount? \n";
	cin >> incrementAmount;



	for (int i = 0; startRange <= endRange; startRange = startRange + incrementAmount)
	{
		outputValue = convertedValue * startRange;
		cout << "US: " << startRange << "		" << convertedValueName << outputValue << endl;
	}
}
//To Do :
//Write a program to convert from US Dollars to Canadian Dollars or Japanese Yens.You can find the current exchange rates at https ://www.federalreserve.gov/releases/h10/current/

//Notes:
//The program should also prompt the user for 3 integers, corresponding to the range of currency amounts(start / end) as well as a increment amount.
//You MUST use a for loop in this program for the calculation / display of the various currencies.