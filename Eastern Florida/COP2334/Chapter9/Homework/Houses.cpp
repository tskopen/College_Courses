/*
 * Read housing data from file, sort hosuing data, display sorted list
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 11, 2026
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int NUM_HOUSES = 10;

struct House
{
    string address;
    int yearBuilt;
    int currentPrice;
};

void readHousesFile(House houses[], int &count);
void sortHouses(House houses[], int count);

/*
 * Main calls functions to housing data from file, sort hosuing data, display sorted list
 *
 * Return:	0
 */

int main() 
{
    House houses[NUM_HOUSES];
    int count = NUM_HOUSES;

    readHousesFile(houses, count);

    sortHouses(houses, count);

    int total = 0;

    for (int i = 0; i < count; i++)
    {
        cout << houses[i].address << endl;
        cout << "  Built: " << houses[i].yearBuilt << endl;
        cout << "  Price: $" << houses[i].currentPrice << endl;

        total += houses[i].currentPrice;
    }

    cout << endl;
    cout << "Average Price: $" << (total / count) << endl;
    cout << "Oldest: " << houses[0].address << endl;
    cout << "Newest: " << houses[count - 1].address << endl;

    return 0;
}

/*
 * Read houses from file
 *
 * Parameter: 	House houses[]	array of house struct
 * Parameter: 	int &count      Reference to count variable
 * Return:		VOID
 */

void readHousesFile(House houses[], int &count)
{
    string filename;
    cout << "File? ";
    cin >> filename;
    cout << endl;

    ifstream file(filename);

    file >> count;

    for (int i = 0; i < count; i++)
    {
        file >> houses[i].address >> houses[i].yearBuilt >> houses[i].currentPrice;
    }

    file.close();
}

/*
 * Sort houses from array - selectionSortStr for Lecture
 *
 * Parameter: 	House houses[]	array of house struct
 * Parameter: 	int count      value of count variable for indexing
 * Return:		VOID
 */

void sortHouses(House houses[], int count)
{
    for (int index = 0; index < count - 1; index++)
    {
        int smallestIndex = index;

        for (int location = index + 1; location < count; location++)
        {
            if (houses[location].yearBuilt < houses[smallestIndex].yearBuilt)
            {
                smallestIndex = location;
            }
        }

        House temp = houses[smallestIndex];
        houses[smallestIndex] = houses[index];
        houses[index] = temp;
    }
}