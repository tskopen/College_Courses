/*
 * Program to print calculate BulkDiscount
 *
 * Name:    Thor Kopenkoskey
 * Date:   Febuary 5, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates additon, subtraction, multiplition, and division
 *
 * Return:  status
 */
int main()
{
	int quantity;
	double unitCost;
	double totalCost;
//inputs
	cout << "Quantity? ";
	cin >> quantity;
	cout << endl;

//BulkDiscount calculator
	if (quantity <= 99)
	{
		unitCost = 2.59;
	}
	else if (quantity <= 499)
	{
		unitCost = 2.29;
	}
	else if (quantity <= 1999)
	{
		unitCost = 2.19;
	}
	else if (quantity >= 2000)
	{
		unitCost = 1.99;
	}

	totalCost = quantity * unitCost;

//outputs
	cout << "Price per unit: $" << unitCost << endl;
	cout << "Total prices: $" << totalCost << endl;
}

