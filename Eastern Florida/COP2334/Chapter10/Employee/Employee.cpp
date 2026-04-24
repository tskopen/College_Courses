/*
 * Employee Class implementation file
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 22, 2026
 */

#include <string>
#include <iomanip>

#include "Employee.h"

using namespace std;

int Employee::numSixFig = 0;

Employee::Employee()
{

}

Employee::Employee(string inputName, string inputPhone, double inputSalary)
{
	name = inputName;
	phone = inputPhone;
	salary = inputSalary;
}


void Employee::setName(string inputName)
{
	name = inputName;
}

void Employee::setPhone(string inputPhone)
{
	phone = inputPhone;
}

void Employee::setSalary(double inputSalary)
{
	salary = inputSalary;
	if (inputSalary >= 100000)
	{
		numSixFig++;
	}
}

int Employee::getNumSixFig()
{
	return numSixFig;
}

void Employee::printSalaryInfo()
{
	cout << setw(10) << name << " " << phone << " $" << salary << endl;
}