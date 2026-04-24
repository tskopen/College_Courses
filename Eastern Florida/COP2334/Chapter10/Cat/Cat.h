#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cat
{
private:
	static const int NUM_OWNERS = 3;
	int age;
	string color;
	string name;
	string ownerName;

public:

	string owners[NUM_OWNERS];
		
	int getAge() const;

	string getColor() const;

	string getName() const;

	void setAge(int years);

	void setColor(string c);

	void setName(string n);

	void printCatInfo(Cat cat);

	void setOwner(string owner);


};



