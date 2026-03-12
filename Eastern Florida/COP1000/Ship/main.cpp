/*
 * Program to take user input and find cost of shipping in an array
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 16, 2025
 */

#include <iostream>
using namespace std;

const int DAYS_ARRAY = 3;
const int SHIPPING_COST_ARRAY = 4;

/*
 * main - Take user input and find cost of shipping in an array
 *
 * Return:  status
 */
 
int main()
{
    
    double shipping[DAYS_ARRAY][SHIPPING_COST_ARRAY] = {
        { 19.75, 17.25, 15.75, 13.25 },
        { 10.25, 8.75, 6.25, 5.25 },
        { 4.25, 3.25, 2.25, 2.00 }
    };
    int itemsIndex = 0;
    int daysIndex = 0;
    
    cout << "Items? ";
    cin >> itemsIndex;
    cout << endl;
        
    while (itemsIndex != -1)
    {     
        
        cout << "Days? ";
        cin >> daysIndex;
        cout << endl;
        
        if (itemsIndex >= 4)
        {
            cout << "$" << shipping[daysIndex][3] << endl;
        }
        else
        {
            cout << "$" << shipping[daysIndex][itemsIndex - 1] << endl;
        }
            
        cout << "Items? ";
        cin >> itemsIndex;
        cout << endl;
    }
    
    return 0;
}