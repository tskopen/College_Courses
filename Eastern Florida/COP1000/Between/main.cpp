/*
 * Program to print validate a number
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 5th, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - validates numbers 5-10, invalidates all others
 *
 * Return:  status
 */
 
int main()
{
//inputs
    int numInput;
    cout << "Number? ";
    cin >> numInput;
    cout << endl;

//validation checker
    if (numInput >= 5 && numInput <= 10)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
    cout << endl;
    return 0;
}