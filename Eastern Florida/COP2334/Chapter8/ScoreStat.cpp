/*
 * Sort a series of scores into a list of 8 buckets going from 0 to 200 with a range of 25.
 *
 * Name:	Thor Kopenkoskey
 * Date:	March 18, 2026
 */

#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_OF_RANGES = 8;

/*
 * Sort a series of scores into a list of 8 buckets going from 0 to 200 with a range of 25.
 * 
 * Return:	status 0
 */

int main()
{
	int input = 0;
	int rangeCount[NUMBER_OF_RANGES] = { 0 };

	cout << "Scores? ";
	cin >> input;
	cout << endl;

	while (input != -1)
	{
		cin >> input;
		int inputIndex = input / 25;
		rangeCount[inputIndex]++;
	}

	cout << setw(11) << right << " Range  Num" << endl << "------- ---" << endl;

	for (int i = 0; i <= 7; i++)
	{
		cout << right << setw(3) << setfill(' ') << (i * 25) << "-";
		cout << right << setw(3) << setfill(' ') << ((i * 25) + 24);
		cout << left << setw(2) << setfill(' ') << " " << rangeCount[i] << endl;
	}

	return 0;
}