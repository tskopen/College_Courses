#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Paycheck
{
    private:
        string name;
        double grossPay;
        double taxRate;

        double taxedGrossPay;
        static unsigned long checkNumber;

    public:
        Paycheck();
        Paycheck(string name, double grossPay, double taxRate);

        unsigned long getCheckNumber();
        void setCheckNumber(int startInput);

        double calcuateTaxedPay();

        void printInfo();
};