/*
 * Program to print calculate cost of a trip
 *
 * Name:    Thor Kopenkoskey
 * Date:   feburary 5th, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates travel cost
 *
 * Return:  status
 */
const int AIR = 150;
const int PREMIUM = 75;
const int OVER_STAY_CHARGE = 100;

int main()
{
    string travelMethod;
    int cost = 200;
    int days;
    string travelQuality;

//inputs
    cout << "Enter air/train/boat: ";
    cin >> travelMethod;
    cout << endl;
    if (travelMethod == "air")
    {
        cost += AIR;
    }
    
    cout << "Enter num days: ";
    cin >> days;
    cout << endl;
    if (days > 2)
    {
        cost += (days - 2) * OVER_STAY_CHARGE;
    }
    
    cout << "Enter standard/premium: ";
    cin >> travelQuality;
    cout << endl;
    if (travelQuality == "premium")
    {
        cost += PREMIUM;
    }
    
//results
    cout << "Price: $" << cost;
    cout << endl;
    
    return 0;
}