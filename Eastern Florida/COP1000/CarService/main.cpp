/*
 * Program to calculate the cost for various car maintences
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 19, 2025
 */

#include <iostream>
#include <string>
using namespace std;

const int OIL = 25;
const int ROTATE = 35;
const int FLUIDS = 10;
const double TAX = 1.05;

/*
 * main - calculate the cost for various car maintences
 *
 * Return:  status
 */
 
int main()
{
	//Declare Variables
	string serviceType;
	int preTaxCost = 0;

	//Primer
	cout << "Service (oil, rotate, fluids)? ";
	cin >> serviceType;
	cout << endl;

	while (serviceType != "done")
	{
		if (serviceType == "oil")
		{
			cout << "$" << OIL;
			preTaxCost += OIL;
			cout << endl;
		}
		if (serviceType == "rotate")
		{
			cout << "$" << ROTATE;
			preTaxCost += ROTATE;
			cout << endl;
		}
		if (serviceType == "fluids")
		{
			cout << "$" << FLUIDS;
			preTaxCost += FLUIDS;
			cout << endl;
		}
		//Primer repeat
		cout << "Service (oil, rotate, fluids)? ";
		cin >> serviceType;
		cout << endl;

	}
	double taxCost = ((preTaxCost * TAX) - preTaxCost);
	double totalCost = preTaxCost + taxCost;

	cout << "Subtotal: $" << preTaxCost << endl;
	cout << "Tax:      $" << taxCost << endl;
	cout << "Total:    $" << totalCost << endl;

	cout << endl;
	
	return 0;
}
