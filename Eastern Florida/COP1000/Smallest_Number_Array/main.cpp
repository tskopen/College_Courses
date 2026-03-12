/*
 * Program to find smallest number of an array of numbers
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 12, 2025
 */

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

int smalletNumber(int numbers[], int ARRAY_SIZE);

/*
 * main - Take user input and find smallest of array
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
    cout << "Smallest is " << smalletNumber(numbers, ARRAY_SIZE) << " of ";
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << " " << numbers[i];
    }
    cout << endl;
    return 0;
}

/*
 * main - Take user input and find smallest of array
 *
 * Parameter: numbers[i] is base array, ARRAY_SIZE is max numbers in array to check
 * Return:  status
 */
 
int smalletNumber(int numbers[], int ARRAY_SIZE)
{
    int min = numbers[0];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    
    return min;    
}