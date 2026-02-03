/* 
* 20. Pizza Pi
* Program to calculate the number of slices a pizza can be cut into.
* 
* Name:    Thor Kopenkoskey
* Date:    1/30/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;   
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