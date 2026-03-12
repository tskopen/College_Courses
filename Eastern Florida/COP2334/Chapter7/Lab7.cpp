/*
 * Program to take user input of triangle sides, and calcuate its type based on a enumerated list.
 *
 * Name:   Thor Kopenkoskey
 * Date:   March 4, 2026
 */

#include <iostream>

using namespace std;

enum TriangleTypes { SCALENE, ISOSCELES, EQUILATERAL, NAT };
TriangleTypes calculateType(int side1, int side2, int side3);
string convertEnumToString(TriangleTypes triangleType);

/*
 * main - Take user input and then parse it through a enum value of triangle types and call a converstion function to make it a string.
 *
 * Return:  0
 */

int main()
{
	int side1;
	int side2;
	int side3;

	cout << "Enter 3 sides? ";
	cin >> side1 >> side2 >> side3;
	cout << endl;

	string output = convertEnumToString(calculateType(side1, side2, side3));

	cout << output;

	return 0;
}

/*
 * Calculate the type of triangle
 *
 * Parameter: 	side1 First Side of Triangle
 * Parameter: 	side2 Second Side of Triangle
 * Parameter: 	side3 Third Side of Triangle
 * Return:		Enumeration type
 */

TriangleTypes calculateType(int side1, int side2, int side3)
{
	if ((side1 + side2) < side3)
	{
		return TriangleTypes::NAT;
	}
	else if (side1 == side2 && side2 == side3)
	{
		return TriangleTypes::EQUILATERAL;
	}
	else if (side1 == side2 && side2 != side3)
	{
		return TriangleTypes::ISOSCELES;
	}
	else if (side1 != side2 && side2 != side3)
	{
		return TriangleTypes::SCALENE;
	}

}
/*
 * Convert the TriangleTypes Enum list to outputs
 *
 * Parameter: 	TriangleTypes	What Enumeration type is it?
 * Return:		Desired output for said enumeration
 */
string convertEnumToString(TriangleTypes triangleType)
{
	switch (triangleType)
	{
		case(0):
			return "The triangle is scalene.";
			break;
		case(1):
			return "The triangle is isosceles.";
			break;
		case(2):
			return "The triangle is equilateral.";
			break;
		case(3):
			return "That is not a triangle.";
			break;
	}
}
