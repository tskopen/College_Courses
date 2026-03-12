/*
* 22. Angle Calculator
* Program to calculate the different trig function angles
*
* Name:    Thor Kopenkoskey
* Date:    1/31/2026
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double angle;

    cout << "Enter an angle in radians: ";
    cin >> angle;

    cout << fixed << setprecision(4);
    cout << "Sine:     " << sin(angle) << endl;
    cout << "Cosine:   " << cos(angle) << endl;
    cout << "Tangent:  " << tan(angle) << endl;

    return 0;
}