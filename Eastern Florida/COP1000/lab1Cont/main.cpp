/*
 * Program to take user's puzzle name, piece count, length, and width and apply it to a class for printout
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 20, 2025
 */
 
#include <string>
#include <iostream>
#include "Receipt.h"
using namespace std;

/*
 * main - Take user input, upload to puzzle class, and print method
 *
 * Return: Output puzzle details
 */
 const int numItems = 5;
int main()
{
    Receipt receipt;
    int itemNumber[numItems] = {1, 16, 30, 35, 38};
    string itemType[numItems] = {"Egg Roll", "Wonton Soup", "Chow Mein", "Beef with Broccoli", "Orange Chicken"};
    double itemPrice[numItems] = {1.50, 2.70, 6.90, 13.90, 12.20};
    int orderNumber;

    for (int i = 0; i < numItems; i++)
    {
        cout << itemNumber[i] << " - " << itemType[i] << " for " << itemPrice[i] << endl;
    }
    cout << "Item number? ";
    cin >> orderNumber;
    receipt.setItemNumber(orderNumber);
    
    for (int i = 0; i < numItems; i++)
        if (orderNumber == itemNumber[i])
        {
            receipt.setItemNumber(itemNumber[i]);
            receipt.setItemPrice((itemPrice[i]));
        }
    if (orderNumber != receipt.getItemNumber())
    {
        cout << "Invalid";
    }
    receipt.print();
}


/******************************************************************************
zip file containing only: Menu.cpp, Receipt.h

Create and print a receipt
Create and use a Receipt class
It should have 3 attributes for the item number, price, and tax rate
It should have getters and setters
It should have a print() method.  When printing the receipt, calculate the tax due and the total bill based on the price of the item and the tax rate.  All those calculations should be done in the print() method
The receipt will look something like:

The tax rate is 5%
If the item number is not found in the menu
print an "Invalid item" message
Set the price of the item to 0
A receipt will still be printed
Sample Run #1 (bold, underlined text is what the user types):

1 - Egg Roll for $1.5
16 - Wonton Soup for $2.7
30 - Chow Mein for $6.9
35 - Beef with Broccoli for $13.9
38 - Orange Chicken for $12.2
Item number? 16

****** RECEIPT ******

16: $2.7
Tax: $0.135
Total: $2.835

***** THANK YOU *****
*******************************************************************************/