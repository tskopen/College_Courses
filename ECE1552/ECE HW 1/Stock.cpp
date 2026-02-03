#include <iostream>
using namespace std;

int main()
{
    // Given data
    int shares = 1000;
    double buyPrice = 45.50;
    double sellPrice = 56.90;
    double commissionRate = 0.02;

    // Purchase calculations
    double amountPaid = shares * buyPrice;
    double buyCommission = amountPaid * commissionRate;

    // Sale calculations
    double amountSold = shares * sellPrice;
    double sellCommission = amountSold * commissionRate;

    // Profit calculation
    double profit = amountSold - sellCommission - amountPaid - buyCommission;

    // Output
    cout << "Amount paid for the stock: $" << amountPaid << endl;
    cout << "Commission paid when buying: $" << buyCommission << endl;
    cout << "Amount sold for the stock: $" << amountSold << endl;
    cout << "Commission paid when selling: $" << sellCommission << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}