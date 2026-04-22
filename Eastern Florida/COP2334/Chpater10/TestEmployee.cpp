/*
 * Main file to call and operate Employee Class
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 22, 2026
 */

#include <string>
#include "Employee.h"

using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;

	string inputName;
	string inputPhone;
	double inputSalary;

	Employee employees[NUM_EMPLOYEES];

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "Name Phone Salary? ";
		cin >> inputName >> inputPhone >> inputSalary;
		cout << endl;

		employees[i].setName(inputName);
		employees[i].setPhone(inputPhone);
		employees[i].setSalary(inputSalary);

		//employees[i] = Employee(inputName, inputPhone, inputSalary); Perferred but set methods are required.
	}

	cout << "Number of 6 figure salaries is " << Employee::getNumSixFig() << endl;

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		employees[i].printSalaryInfo();
	}

	return 0;
}