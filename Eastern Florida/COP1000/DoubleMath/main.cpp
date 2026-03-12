/*
 * Program to print calculate cost of a trip
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 28, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates additon, subtraction, multiplition, and division 
 *
 * Return:  status
 */
 
int main()
{
    double num1;
    double num2;
    cout << "Numbers? ";
    cin >> num1 >> num2;
    cout << endl;
    
    cout << "Addition is " << num1 + num2 << endl;
    cout << "Subtraction is " << num1 - num2 << endl;
    cout << "Multiplition is " << num1 * num2 << endl;
    cout << "division is " << num1 / num2 << endl;
}