/*
* Program to calculate whether a number is divisible by 3
*
* Name:    Thor Kopenkoskey
* Date:    2/18/2026
*/

#include <cmath>
#include <iostream>

using namespace std;

/*
 * main - Calculate whether a number is disible by 3 and count it into numOfInput
 *
 * Return:  0
 */

int main()
{
	int input;
	int numOfInput = 0;

	cout << "Number? ";
	cin >> input;
	cout << endl;
	while (input != -1)
	{
		int tmpNumber = input;
		int summedInput = 0;
		while (tmpNumber > 0)
		{
			summedInput += tmpNumber % 10;
			tmpNumber = tmpNumber / 10;
		}

		if (summedInput % 3 == 0)
		{
			cout << input << " is divisible by 3" << endl;
			numOfInput++;
		}
		else
		{
			cout << input << " is NOT divisible by 3" << endl;
		}

		cout << "Number? ";
		cin >> input;
		cout << endl;
	}

	if (numOfInput > 1)
	{
		for (int i = 1; i < numOfInput; i++)
		{
			cout << i << ", ";
		}
		cout << numOfInput << " ";
		cout << "numbers divisible by 3" << endl;
	}
}

