#include <iostream>
using namespace std;

int main()
{
    double R, E, S;
    int V;

    // Input
    cout << "Enter the length of the row (in feet): ";
    cin >> R;

    cout << "Enter the space used by each end-post assembly (in feet): ";
    cin >> E;

    cout << "Enter the space between vines (in feet): ";
    cin >> S;

    // Calculation
    V = (R - 2 * E) / S;

    // Output
    cout << "The number of grapevines that will fit in the row is: "
         << V << endl;

    return 0;
}