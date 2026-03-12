/*
 * Program to calculate sale price
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 22, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates sale price
 *
 * Return:  status
 */

int main()
{
	// Variables
	double price;
	double sale;
	double salePrice;

	cout << "Price? ";
	cin >> price;
	cout << endl;

	cout << "Sale? ";
	cin >> sale;
	cout << endl;

	salePrice = price - (price * sale / 100);
	cout << "Sale price is " << "$" << salePrice;
	cout << endl;

	return 0;
}