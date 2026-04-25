#include "Paycheck.h"

const int MAX_CHECKS = 3;

int main()
{
    Paycheck paychecks[MAX_CHECKS];

    string tempNameInput;
    double tempGrossPayInput;
    double tempTaxRateInput;
    int tempStartInput;

    for(int i = 0; i < MAX_CHECKS; i++)
    {
        cout << "? ";
        cin >> tempNameInput >> tempGrossPayInput >> tempTaxRateInput;
        cout << endl;

        paychecks[i] = Paycheck(tempNameInput, tempGrossPayInput, tempTaxRateInput);
    }

    cout << "Start? ";
    cin >> tempStartInput;
    cout << endl;

    paychecks[0].setCheckNumber(tempStartInput);

    for(int i = 0; i < MAX_CHECKS; i++)
    {
        paychecks[i].printInfo();
        paychecks[0].setCheckNumber(paychecks[0].getCheckNumber() + 1);
    }

    cout << "Next check: " << paychecks[0].getCheckNumber() << endl;
}