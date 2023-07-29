
//Lab 1 
// July 5 2023 
// Author: 40157663
// A simple program to create total price of user's 

#include <iostream>

using namespace std;

int main() {
	double notebook_price = 100;
	double pen_price = 30;
	double bag_price = 2;
	double bonus;
	int n_number, p_number, b_number;
	double total;
	cout << "how many notebooks\n";
	cin >> n_number;
	cout << "and how many bag?\n";
	cin >> b_number;
	cout << "and how many pens? \n";
	cin >> p_number;
	// total price of the order
	total = (notebook_price * n_number) + (pen_price * p_number) + (bag_price * b_number);
	bonus = total / 100; // $1 bonus for every $100

	// See output below
	cout << "Your total bill for " << n_number << "notebook(s), " << p_number << " pen(s) and " << b_number << " bag(s) is " << total << endl;
	cout << "You earned $" << bonus << " as bonus " << endl;

	//end
	return 0;
}