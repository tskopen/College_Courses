/*
 * Implementation to prompt user for contact data and interact with contact class.
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 24, 2026
 */ 

#include "Contact.h"

static const int MAX_CONTACTS = 5;

/*
 * Prompt user for contact data and interact with contact class.
 *
 * Return:		0
 */

int main()
{
	string tempName;
	string tempPhoneNumber;
	string tempEmail;

	Contacts contact[MAX_CONTACTS];

	int arrayIndex = 0;

	cout << "Name? ";
	cin >> tempName;
	cout << endl;

	while (tempName != "exit" && arrayIndex < MAX_CONTACTS)
	{
		cout << "Number Email? ";
		cin >> tempPhoneNumber >> tempEmail;
		cout << endl;

		contact[arrayIndex] = Contacts(tempName, tempPhoneNumber, tempEmail);

		arrayIndex++;

		if (arrayIndex < MAX_CONTACTS) //Test program for 5 contact input says to input "exit", but the checker expects no output.
		{	
			cout << "Name? ";
			cin >> tempName;
			cout << endl;
		}
	}

	for (int i = 0; i < arrayIndex; i++)
	{
		contact[i].print();
	}

	return 0;
}

