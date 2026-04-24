#include "Contacts.h"

Contact::Contact()
{

}

Contact::Contact(string newName, string newNumber, string newEmail)
{
    name = newName;
    number = newNumber;
    email = newEmail;
}

Contact::~Contact()
{

}

void Contact::print() const
{
    cout << name << endl << number << endl << email;
}