/*
 * Program to print range of numbers
 *
 * Name:    Thor Kopenkoskey
 * Date:   Febuary 12, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - prompts for range and prints
 *
 * Return:  status
 */

int main()
{
    int range1;
    int range2;
    cout << "Start finish? ";
    
    cin >> range1;
    cin >> range2;
    cout << endl;
    for (int i = range1; i <= range2; i++)
    {
        cout << i;
        cout << endl;
    }
}