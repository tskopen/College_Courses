#include "Paycheck.h"

using namespace std;

//Note: This could be done, likely easier (Likely you meant it to be down and append end values), with a string. However I wanted to challenge-
// myself and use a number which makes the check ID easier to expand upon later - what happens if checks go past the inital 4 start places?
unsigned long Paycheck::checkNumber = 0000;

Paycheck::Paycheck()
{
    name = "UNKNOWN";
    grossPay = -1;
    taxRate = -1;
}
Paycheck::Paycheck(string tempNameInput, double tempGrossPayInput, double tempTaxRateInput)
{
    name = tempNameInput;
    grossPay = tempGrossPayInput;
    taxRate = tempTaxRateInput;
}

unsigned long Paycheck::getCheckNumber()
{
    return checkNumber;
}

void Paycheck::setCheckNumber(int startInput)
{
    checkNumber = startInput;
}

double Paycheck::calcuateTaxedPay()
{
    return taxedGrossPay = (grossPay * (1 - (taxRate / 100)));
}


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