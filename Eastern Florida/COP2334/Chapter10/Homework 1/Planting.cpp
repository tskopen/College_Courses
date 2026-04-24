/*
 * Sort user data into a Garden class object
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include <iostream>

#include "Garden.h"

/*
 * Main function to collect user data and input into garden class
 *
 * Return:	0
 */

int main()
{
    string tempName;
    double tempSize;
    string tempPlant;

    Garden garden;

    garden.printGarden();

    cout << "Name size? ";
    cin >> tempName >> tempSize;
    cout << endl;

    garden.setName(tempName);
    garden.setSize(tempSize);

    cout << "Plant? ";
    cin >> tempPlant;
    cout << endl;

    while (tempPlant != "exit")
    {
        garden.addPlant(tempPlant);

        cout << "Plant? ";
        cin >> tempPlant;
        cout << endl;
    }

    garden.printGarden();
    garden.clearGarden();

    cout << "After cleared" << endl;
    garden.printGarden();
}