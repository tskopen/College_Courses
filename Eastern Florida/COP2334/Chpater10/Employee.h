/*
 * Employee Class header file
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 22, 2026
 */

#pragma once
#include <iostream>
#include <string>

using namespace std;


class Employee
{
	private:
		string name;
		string phone;
		double salary;
		static int numSixFig;


	public:

		Employee();
		Employee(string inputName, string inputPhone, double inputSalary);

		void setName(string inputName);
		void setPhone(string inputPhone);
		void setSalary(double inputSalary);

		static int getNumSixFig();

		void printSalaryInfo();

};

