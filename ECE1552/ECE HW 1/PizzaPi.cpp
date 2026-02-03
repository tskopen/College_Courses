#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;      // named constant for pi
    const double SLICE_AREA = 14.125;

    double diameter;
    double radius;
    double pizzaArea;
    double slices;

    cout << "Enter the diameter of the pizza (in inches): ";
    cin >> diameter;

    radius = diameter / 2.0;
    pizzaArea = PI * radius * radius;
    slices = pizzaArea / SLICE_AREA;

    cout << fixed << setprecision(1);
    cout << "The pizza can be divided into " << slices << " slices." << endl;

    return 0;
}