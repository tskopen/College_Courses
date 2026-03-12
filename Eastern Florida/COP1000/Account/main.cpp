/*
 * Program to track balance of a bank account
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 22, 2025
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * main - Track balance of a bank account
 *
 * Return:  status
 */

int main()
{

//Declare Variables
	double goal = 0;
	double addedAmount = 0;
	double totalAmount = 0;
	string action;

//Primer
	cout << "Goal? ";
	cin >> goal;
	cout << endl;

	cout << "1=deposit, 2=withdraw, 3=interest, 4=quit? ";
	cin >> action;
	cout << endl;

//Edits/actions to bank account calculations
	while (action != "4")
	{
		cout << "Amount? ";
		cin >> addedAmount;
		cout << endl;

		if (action == "1")
		{
			totalAmount += addedAmount;
		}
		else if (action == "2")
		{
			totalAmount -= addedAmount;
		}
		else if (action == "3")
		{
			totalAmount = ((addedAmount / 100) + 1) * totalAmount;
		}

		cout << "Balance $" << totalAmount;
		cout << endl;

		cout << "1=deposit, 2=withdraw, 3=interest, 4=quit? ";
		cin >> action;
		cout << endl;

	}
//Sential end squence
	if (action == "4")
	{
		if (totalAmount < goal)
		{
			cout << "Keep going";
			cout << endl;
		}
		else
		{
			cout << "Congratulations!";
			cout << endl;
		}
	}
	return 0
}

