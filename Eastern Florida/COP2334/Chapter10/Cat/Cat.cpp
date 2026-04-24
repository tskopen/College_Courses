#include "Cat.h"

int Cat::getAge() const
{
	return age;
}

string Cat::getColor() const
{
	return color;
}

string Cat::getName() const
{
	return name;
}

void Cat::setAge(int years)
{
	age = years;
}

void Cat::setColor(string c)
{
	color = c;
}

void Cat::setName(string n)
{
	name = n;
}

void Cat::printCatInfo(Cat cat)
{
	cout << "Name: " << cat.getName() << endl;
	cout << "Age: " << cat.getAge() << endl;
	cout << "Color: " << cat.getColor() << endl;
}

void Cat::setOwner(string owner)
{
	ownerName[numOwners] = owner;

	numOwners + 1;
}