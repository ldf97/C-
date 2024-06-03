//Dante Freeman, CSC114, 6.3.2024, Module 4, Lab 2: Branching Code (Bank Program)

#include <iostream>
using namespace std;
int main()
{
	//Declare variables
	float credit;
	float charge;
	int transactions;
	credit = 10;
	charge = 0;
	transactions = 0;
	
	//Ask the user how many transactions they completed
	cout << "How many transactions were there? ";
	cin >> transactions;

	//Tiered pricing system using if/else if/else. 
	// Also, user input validation -- no negative numerical input permitted
	if (transactions < 0) {
		cout << "Invalid user input; Exiting program.";
		return 0;

	} else if (transactions > 60) {
		charge = .04;
	} else if (transactions > 40) {
		charge = .06;
	} else if (transactions > 20) {
		charge = .08;
	} else {
		charge = .1;
	}
	
	// Calculate credit based on Monthly charge (10$) and service charges (tiered pricing based on number of transactions)
	credit = credit + (transactions * charge);
	
	// Display a warning if the user will be charged greater than 20 dolalrs
	if (credit > 20) {
		cout << "Warning: Service Fee will be over 20 dollars \n";
	}

	// Tell the user the service fees.
	cout << "The service fees are: " << credit << " dollars.";
}




//
//Module 4, Assignment: Branching Code

//A bank charges $10 per month plus the following transaction fees for processing credit card charges.

//$.10 each for fewer than 20 transactions

//$.08 each for 20 - 39 transactions

//$.06 each for 40 - 59 transactions
//$.04 each for 60 or more transactions

//Write a program that asks for the number of transactions carried out that month.Compute and display the bank's service fees for the month.

//If the service fees exceed $20 for the month, warn the user.

//If a negative value is entered, the program should display an urgent message and exit.

//Finally, add input validation to make sure that the number of transactions is not negative.If a negative number of transactions 
//is entered, an error message should be displayed, and the program should exit.