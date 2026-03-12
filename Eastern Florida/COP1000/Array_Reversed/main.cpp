/*
 * Program to reverse an array of numbers
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 12, 2025
 */

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

/*
 * main - Take user input and reverse the numbers
 *
 * Return:  status
 */

int main()
{
    int numbers[ARRAY_SIZE];
    
    cout << "Numbers? ";
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> numbers[i];
    }
    
    cout << endl;
    cout << "Reverse: ";
    
    for (int i = 4; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    
    return 0;
}