/*
* 24. Planting Grape vines
* Program to calculate the number of grape vines that can fit in a row
*
* Name:    Thor Kopenkoskey
* Date:    1/31/2026
*/

#include <iostream>
using namespace std;

int main()
{
    double R, E, S;
    int V;

    cout << "Enter the length of the row (in feet): ";
    cin >> R;

    cout << "Enter the space used by each end-post assembly (in feet): ";
    cin >> E;

    cout << "Enter the space between vines (in feet): ";
    cin >> S;

    V = (R - 2 * E) / S;
    cout << "The number of grapevines that will fit in the row is: "
         << V << endl;

    return 0;
}