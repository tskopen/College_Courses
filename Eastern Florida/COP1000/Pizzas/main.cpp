/*
 * Program to print number of toppings on a pizza
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 16, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - print number of toppings on a pizza
 *
 * Return:  status
 */

int main()
{
	//variables
	int numTotalToppings = 1;
	int numToppings = 1;
    
    //insert num of Toppings
	cout << "Num Toppings? ";
	cin >> numTotalToppings;
	cout << endl;

	//print out toppings
	while (numTotalToppings > -1)
	{

		cout << "Pizza:" << endl;
		for (numToppings = 1; numTotalToppings >= numToppings; numToppings++)
		{
			cout << "  Topping #" << numToppings << ":" << endl;
		}

		cout << "Num Toppings? ";
		cin >> numTotalToppings;
		cout << endl;

	}
}