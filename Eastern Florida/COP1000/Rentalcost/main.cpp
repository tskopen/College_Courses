/*
 * Program to calculate cost of a rental
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 09, 2025
 */

#include <iostream>
using namespace std;

const int BIKE = 10;
const int BOARD = 15;
const int UMBRELLA = 5;
const int CHAIR = 7;

int rentalCost(string rentalType, int daysRented);

/*
 * main - Take user input and send to cost function
 *
 * Return:  status
 */
 
int main()
{
    string rentalType;
    int daysRented;
    
    cout << "Item Days? ";
    cin >> rentalType >> daysRented;
    
    rentalCost(rentalType, daysRented);

    cout << rentalCost(rentalType, daysRented) << endl;
}

/*
 * rentalCost - Calculates cost
 *
 * Parameter: Rental type and how long its rented
 * Return:  cost of rental
 */
 
int rentalCost(string rentalType, int daysRented)
{
    int totalCost;
    if (rentalType == "bike")
    {
        totalCost = BIKE * daysRented;
    }
    
    if (rentalType == "board")
    {
        totalCost = BOARD * daysRented;
    }
    
    if (rentalType == "umbrella")
    {
        totalCost = UMBRELLA * daysRented;
    }
    
    if (rentalType == "chair")
    {
        totalCost = CHAIR * daysRented;
    }
    
    return totalCost;
}