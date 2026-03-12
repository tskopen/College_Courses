/*
 * Program to calculate the cost for various quantities
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 16, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculate the cost for various quantities
 *
 * Return:  status
 */

int main()
{
    //Variables
    float baseCost = 0;
    int quantityRequested = 0;
    int totalQuantity;
    
    //Receive cost and quantity requested
    cout << "Price max? ";
    cin >> baseCost;
    cin >> quantityRequested;
    cout << endl;
    
    //calculate the cost for various quantities
    for (totalQuantity = 1; totalQuantity <= quantityRequested; totalQuantity++)
    {
        float totalCost = totalQuantity * baseCost;
        cout << totalQuantity << " bags = $";
        cout << totalCost;
        cout << endl;
    }
}