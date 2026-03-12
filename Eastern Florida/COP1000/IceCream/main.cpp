/*
 * Program to print calculate IceCream scoops
 *
 * Name:    Thor Kopenkoskey
 * Date:   Febuary 9, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates amount of ice cream scoops
 *
 * Return:  status
 */

int main()
{
//Variables
    string flavor;
    int scoopsCount = 1;

//inputs
    cout << "Flavor? ";
    cin >> flavor;
    cout << endl;

//outputs
    if (flavor == "chocolate" || flavor == "strawberry")
    {
        scoopsCount = scoopsCount + 1;
        cout << scoopsCount << " of " << flavor;
    }
    else
    {
        cout << scoopsCount << " of " << flavor;
    }
    
    return 0;
}