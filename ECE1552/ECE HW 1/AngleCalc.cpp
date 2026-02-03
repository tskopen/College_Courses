#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double angle;

    // Ask for input
    cout << "Enter an angle in radians: ";
    cin >> angle;

    // Display results in fixed-point notation with 4 decimal places
    cout << fixed << setprecision(4);
    cout << "Sine:     " << sin(angle) << endl;
    cout << "Cosine:   " << cos(angle) << endl;
    cout << "Tangent:  " << tan(angle) << endl;

    return 0;
}