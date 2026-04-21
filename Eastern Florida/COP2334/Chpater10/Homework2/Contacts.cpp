#include "Contacts.h"

Contacts::Contacts()
{
    name = "";
    number = "";
    email = "";
}

Contacts::Contacts(string newName, string newNumber, string newEmail)
{
    name = newName;
    number = newNumber;
    email = newEmail;
}

Contacts::~Contacts() {}

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