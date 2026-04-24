#include "Contacts.h"

int main()
{
    string nameInput;
    string numberInput;
    string emailInput;

    int MAX_CONTACTS = 5;
    int index = 0;

    Contact contacts[MAX_CONTACTS];

    cout << "Name? ";
    cin >> nameInput;

    while (nameInput != "exit" && index < MAX_CONTACTS)
    {
        cout << "Number Email? ";
        cin >> numberInput >> emailInput;

        contacts[index] = Contact(nameInput, numberInput, emailInput);

        index++;

        cout << "Name? ";
        cin >> nameInput;
    }

    for (int i = 0; i < MAX_CONTACTS; i++)
    {
        contacts[i].print();
    }

}
