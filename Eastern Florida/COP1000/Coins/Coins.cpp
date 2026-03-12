/*
 * Program to calculate how much change people have combined
 *
 * Name:    Thor Kopenkoskey
 * Date:   Feburary 18, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - calculates total amount of change combined from various people
 *
 * Return:  0
 */

int main()
{
    string name;
    int grandTotalCents = 0;
    int grandTotalCoins = 0;

    cout << "Name? ";
    cin >> name;
    cout << endl;

    while (name != "done")
    {
        int numCoins;
        int personTotal = 0;
        char coin;

        cout << "Num coins? ";
        cin >> numCoins;
        cout << endl;

        cout << "Enter all coins: ";

        for (int i = 0; i < numCoins; i++)
        {
            cin >> coin;

            switch (coin)
            {
                case 'q':
                    personTotal += 25;
                    break;
                case 'd':
                    personTotal += 10;
                    break;
                case 'n':
                    personTotal += 5;
                    break;
                case 'p':
                    personTotal += 1;
                    break;
            }

            grandTotalCoins++;
        }

        cout << endl;

        cout << name << " has " << personTotal << " cents" << endl;

        grandTotalCents += personTotal;

        cout << "Name? ";
        cin >> name;
        cout << endl;
    }

    cout << "Grand total: " << grandTotalCents
         << " cents with " << grandTotalCoins << " coins" << endl;

    return 0;
}
