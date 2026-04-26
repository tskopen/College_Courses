/*
 * Implementation file for Paycheck.cpp
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 26, 2026
 */ 

#include "Paycheck.h"

using namespace std;

unsigned long Paycheck::checkNumber = 0000;

/*
 * Constructor of method with default values.
 *
 * Return:		N/A
 */
Paycheck::Paycheck()
{
    name = "UNKNOWN";
    grossPay = -1;
    taxRate = -1;
}

/*
 * Default constructor with input values.
 *
 * Parameter: 	string tempNameInput	    Name Input
 * Parameter: 	double tempGrossPayInput	Grosspay Input
 * Parameter: 	double tempTaxRateInput 	Tax Rate Input
 *
 * Return:		N/A
 */
Paycheck::Paycheck(string tempNameInput, double tempGrossPayInput, double tempTaxRateInput)
{
    name = tempNameInput;
    grossPay = tempGrossPayInput;
    taxRate = tempTaxRateInput;
}

/*
 * Description of the method
 *
 * Return:		desired checkNumber
 */
unsigned long Paycheck::getCheckNumber()
{
    return checkNumber;
}

/*
 * Description of the method
 *
 * Parameter: 	int startInput	Starting check number
 * Return:		VOID
 */
void Paycheck::setCheckNumber(int startInput)
{
    checkNumber = startInput;
}

/*
 * calcuate the pay after taxes
 *
 * Return:		taxedGrossPay
 */
double Paycheck::calcuateTaxedPay()
{
    return taxedGrossPay = (grossPay * (1 - (taxRate / 100)));
}

/*
 * Print out class information.
 *
 * Return:		VOID
 */
void Paycheck::printInfo()
{
    cout << "===========================" << endl;
    cout << "ABC, Inc.              " << checkNumber << endl;
    cout << endl;
    cout << "To: " << left << setw(15) << name << "$ " << setw(6) << setfill(' ') << fixed << setprecision(2) << calcuateTaxedPay() << endl;
    cout << endl;
    cout << "1234-5678-" << checkNumber << endl;
    cout << "===========================" << endl;
}