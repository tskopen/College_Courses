/*
 * Program to calculate Miles to Kilometer unit conversion
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 22, 2025
 */

#include <iostream>
using namespace std;

const double KILOMETER_TO_MILE = 0.621371;

/*
 * main - calculates Miles to Kilometer conversion
 *
 * Return:  status
 */
 
int main()
{
    double miles;

    cout << "Miles? ";
    cin >> miles;
    cout << endl;
    
    cout << miles << " miles = " << (miles / KILOMETER_TO_MILE) << " km";
    cout << endl;
}