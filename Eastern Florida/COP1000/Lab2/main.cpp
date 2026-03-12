/*
 * Program to create a tripler 
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 05, 2025
 */

#include <iostream>
using namespace std;
 
int calculateVolume(double x,  double z,  double y);

/*
 * main - Take user input and print function
 *
 * Return:  status
 */
 
int main()
{       
    double x = 1;
    double y = 1;
    double z = 1;
    
    while(x != 0){

        cout << "Length width height? " << endl;
        cin >> x >> y >> z;
    
        cout << "Length width height? " << calculateVolume(x, z, y) << endl;
    }
}

/*
 * tripler - Triples Number
 *
 * Parameter: number inputed variable tripled
 * Return:  status
 */
 
int calculateVolume(double x,  double z,  double y)
{
    return (x * y * z);
}