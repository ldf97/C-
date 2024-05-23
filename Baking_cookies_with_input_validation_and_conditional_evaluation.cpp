#include <iostream>
#include <list>
#include <vector>
//Dante Freeman, CSC114, 5.22.2024, Module 4, Lab 1: If Statements (If statements/cookie baking program)

using namespace std;

int main()
{
	//Initialize variables.
	float sugar;
	float butter;
	float flour;
	int cookies;
	float cookies_needed;
	float sugar_needed;
	float flour_needed;
	float butter_needed;
	float bakingquotient;

	//Set float variables for ingredient amounts, integer for cookies
	sugar = 1.5;
	butter = 1;
	flour = 2.75;
	cookies = 48;

	//Ask the user for input on how many cookies are needed.
	cout << "How many cookies do you want to make? \n";
	cin >> cookies_needed;

	//If the user enters a negative number for cookies, the program exits.
	if (cookies_needed < 0) {
		cout << "Can't bake negative amount of cookies. Exiting program." << endl;
		return 0;
	}
	
	//Calculate the required ingredients, based on ingredient amounts.
	bakingquotient = cookies_needed / cookies;
	sugar_needed = bakingquotient * sugar;
	butter_needed = bakingquotient * butter;
	flour_needed = bakingquotient * flour;

	//If an ingredient needs more than five cups, let the user know which ingredient they'll need more of.
	
	//First make a list just containing an empty string
	// In C++, objects in lists are stored in random locations. 
	// List items are linked sequentially by having each item tell where it's previous item is at, and the next item is at.
	list<string> ingredient_need_more_of = {""};

	// Check if sugar, butter, or flour will need more than 5 cups. 
	// If more than 5 is needed, add it to "ingredients need more of" list.
	if (sugar_needed > 5)
		ingredient_need_more_of.push_back("sugar");
	if (butter_needed > 5)
		ingredient_need_more_of.push_back("butter");
	if (flour_needed > 5)
		ingredient_need_more_of.push_back("flour");

	//If any ingredients will require more than 5 cups, tell the user more ingredients are needed.
	//Otherwise, state there are enough ingredients.
	if (sugar_needed > 5 || butter_needed > 5 || flour_needed > 5) {
		cout << "We might need more of these ingredients:";

		//State which ingredients are needed from the list using a for loop.
		for (string item : ingredient_need_more_of) {
			cout << item << " ";
		}
	}
	else {
		cout << "There's enough ingredients to make " << cookies_needed << " cookies!";
	}
	

	//Print out final calculation for baking ingredients needed to make required number of cookies.
	cout << "\nTo make " << cookies_needed << " cookies, you'll need: " << sugar_needed;
	cout << " cup(s) of sugars, " << butter_needed << " cup(s) of butter, and ";
	cout << flour_needed << " cup(s) of flour " << endl;

}