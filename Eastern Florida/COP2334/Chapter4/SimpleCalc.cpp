/*
* Program to calculate various operators
*
* Name:    Thor Kopenkoskey
* Date:    2/4/2026
*/

#include <iostream>
#include <string>

using namespace std;

/*
 * main - print various arithmetic calculations
 *
 * Return:  0
 */

int main()
{
	int num1 = 0;
	int num2 = 0;
	char symbol = '+';
	int ans = 0;

	cout << "Enter number +|-|x|/ number: ";
	cin >> num1 >> symbol >> num2;
	cout << endl;

	switch (symbol)
	{
		case '+':
			ans = num1 + num2;
			cout << "Answer is " << ans << endl;
			break;
		case '-':
			ans = num1 - num2;
			cout << "Answer is " << ans << endl;
			break;
		case 'x':
			ans = num1 * num2;
			cout << "Answer is " << ans << endl;
			break;
		case '/':
			if (num2 == 0)
			{
				cout << "Cannot divide by zero" << endl;
				break;
			}
			ans = num1 / num2;
			cout << "Answer is " << ans << endl;
			break;
		default:
			cout << "Illegal operator" << endl;
			break;
	}
	return 0;
}