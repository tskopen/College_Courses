#include "Contacts.h"

static const int MAX_CONTACTS = 5;


int main()
{
	string tempName;
	string tempPhoneNumber;
	string tempEmail;
	Contacts Contact[MAX_CONTACTS];

	int arrayIndex = 0;


	cout << "Name? ";
	cin >> tempName;
	cout << endl;


	while (tempName != "exit" && arrayIndex != 5)
	{

		cout << "Number Email? ";
		cin >> tempPhoneNumber >> tempEmail;
		cout << endl;

		Contact[arrayIndex] = Contacts(tempName, tempPhoneNumber, tempEmail);

		cout << "Name? ";
		cin >> tempName;
		
		arrayIndex++;
	}

	for(int i = 0; i < arrayIndex; i++)
	{
		Contact[i].print();
	}
}

