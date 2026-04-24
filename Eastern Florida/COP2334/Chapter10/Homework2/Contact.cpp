/*
 * Implementation for contact.h functions
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 24, 2026
 */ 

#include "Contact.h"

/*
 * Constructor to initalize empty values.
 *
 * Return:		N/A
 */

Contacts::Contacts()
{
    name = "";
    number = "";
    email = "";
}

/*
 * Description of the method
 *
 * Parameter: 	string newName	    Name input
 * Parameter: 	string newNumber	Number input
 * Parameter: 	string newEmail	    Email input
 * Return:		N/A
 */

Contacts::Contacts(string newName, string newNumber, string newEmail)
{
    name = newName;
    number = newNumber;
    email = newEmail;
}

/*
 * Deconstructor, no allocated data that needs code, empty.
 *
 * Return:		N/A
 */

Contacts::~Contacts() 
{

}

/*
 * Function to print out Class objects with phone number formatting. 
 *
 * Return:		VOID
 */

void Contacts::print() const
{
    cout << "Name: " << name << endl;

    cout << "   Number: ";

    if (number.length() == 10)
    {
        cout << "(" << number.substr(0, 3) << ") "
             << number.substr(3, 3) << "-"
             << number.substr(6, 4);
    }
    else if (number.length() == 7)
    {
        cout << number.substr(0, 3)
             << "-" << number.substr(3, 4);
    }
    else
    {
        cout << number;
    }

    cout << endl;
    cout << "   Email: " << email << endl;
}