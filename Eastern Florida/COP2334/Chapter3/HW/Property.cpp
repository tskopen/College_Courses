/*
* Program calculate home taxes.
*
* Name:    Thor Kopenkoskey
* Date:    Feburary 1, 2026
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * main - Take home address, price, and millrate and output taxes rates.
 *
 * Return: 0
 */

int main()
{
    ifstream inFile; 
    string fName;
    string address; 
    double price;
    double millRate;

    cout << "Data? ";
    cin >> fName;
    cout << endl;
    
    inFile.open(fName);
    for (int i = 0; i < 3; i++)
    {

        getline(inFile, address);
        address.erase(address.find_last_not_of("\r") + 1); //Odd line, only way I could get the .txt file in your test setup file to work
        inFile >> price;
        inFile >> millRate;
        cout << fixed << setprecision(2);
        inFile.ignore(255, '\n');  // clear newline before next getline

        cout << left << setfill('_') << setw(20) << address << " $"
             << right << fixed << setprecision(2)
             << price * (millRate / 100.0)
             << endl;
    }
    inFile.close();
    return 0;
}
