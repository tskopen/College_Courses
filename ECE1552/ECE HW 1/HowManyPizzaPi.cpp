#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;        // named constant for pi
    const double SLICE_AREA = 14.125; // square inches per slice
    const int SLICES_PER_PERSON = 4;

    int people;
    double diameter;
    double radius;
    double pizzaArea;
    double slicesPerPizza;
    int totalSlicesNeeded;
    int pizzasNeeded;

    // Input
    cout << "Enter the number of people attending the party: ";
    cin >> people;

    cout << "Enter the diameter of the pizza (in inches): ";
    cin >> diameter;

    // Calculations
    radius = diameter / 2.0;
    pizzaArea = PI * radius * radius;
    slicesPerPizza = pizzaArea / SLICE_AREA;

    totalSlicesNeeded = people * SLICES_PER_PERSON;

    pizzasNeeded = static_cast<int>(
        ceil(totalSlicesNeeded / slicesPerPizza)
    );

    // Output
    cout << fixed << setprecision(1);
    cout << "You need to purchase " << pizzasNeeded << " pizzas." << endl;

    return 0;
}