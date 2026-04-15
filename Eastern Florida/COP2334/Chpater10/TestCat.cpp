#include "Cat.h"


int main()
{
	Cat cat;

	string tempName;
	int tempAge;
	string tempColor;

	cout << "Name Age Color? ";
	cin >> tempName >> tempAge >> tempColor;

	cout << "How many owners? ";
	cin >> numOwners;

	for(int i = 0; 0 < numOwners; i++)
	{
		cout << "Enter Owners: ";
		cin >> tempName
		cat.setOwners() = tempName;
	}


	cat.setName(tempName);
	cat.setAge(tempAge);
	cat.setColor(tempColor);

	cat.printCatInfo(cat);

}

