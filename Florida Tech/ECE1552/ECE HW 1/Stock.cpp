/*
* 23. Stock Transaction Program
* Program to calculate Stock price and commission
*
* Name:    Thor Kopenkoskey
* Date:    1/30/2026
*/

#include <iostream>
using namespace std;

int main()
{
    int shares = 1000;
    double buyPrice = 45.50;
    double sellPrice = 56.90;
    double commissionRate = 0.02;

    double amountPaid = shares * buyPrice;
    double buyCommission = amountPaid * commissionRate;

    double amountSold = shares * sellPrice;
    double sellCommission = amountSold * commissionRate;

    double profit = amountSold - sellCommission - amountPaid - buyCommission;

    // Output
    cout << "Amount paid for the stock: $" << amountPaid << endl;
    cout << "Commission paid when buying: $" << buyCommission << endl;
    cout << "Amount sold for the stock: $" << amountSold << endl;
    cout << "Commission paid when selling: $" << sellCommission << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}