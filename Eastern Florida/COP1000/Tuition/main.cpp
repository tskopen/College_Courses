/*
 * Program to print calculate cost of a trip
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 28, 2025
 */

#include <iostream>
using namespace std;

const int AA = 500;
const int AS = 500;
const int BAS = 600;
const int OVER_CREDIT = 50;

/*
 * main - calculates additon, subtraction, multiplition, and division 
 *
 * Return:  status
 */
    
int main()
{

    string degree;
    int credits;
    int totalCost = 0;
    
    //inputs
    cout << "Enter AA/AS/BAS: ";
    cin >> degree;
    cout << endl;

    cout << "Enter num credits: ";
    cin >> credits;
    cout << endl;

//Degree costs
    if (degree == "AA" || degree == "AS")
    {
        totalCost += 500;
    }
    else if (degree == "BAS")
    {
        totalCost += 600;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    
//Credit costs
    if (credits >= 12)
    {
        totalCost += ((credits - 12) * 50);
    }

    cout << "Tuition: $" << totalCost << endl;  
    return 0;
}