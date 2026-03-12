/*
 * Program to take user input and find the average of an array, and what numbers are below/above
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 16, 2025
 */

#include <iostream>
using namespace std;

const int NUMBERS_SIZE = 5;

void arrayCalculations(int numbers[NUMBERS_SIZE]);

/*
 * main - Take user input and find the average of an array, and what numbers are below/above
 *
 * Return:  status
 */

int main()
{
    int numbers[NUMBERS_SIZE];
    cout << "Numbers? ";
    for (int i = 0; i < NUMBERS_SIZE; i++)
    {
        cin >> numbers[i];
    }
        
    cout << endl;
    arrayCalculations(numbers);
    return 0;
}

/*
 * arrayCalculations - find the average of an array, and what numbers are below/above
 *
 * Parameter: numbers[i] is base array, NUMBERS_SIZE the amount of numbers in array to check
 * Return: average of array and what numbers are below/above the average
 */
 
void arrayCalculations(int numbers[NUMBERS_SIZE])
{
    double totalSum = 0;
    for (int i = 0; i < NUMBERS_SIZE; i++)
    {
        totalSum += numbers[i];
    }  
        
    double average = totalSum / NUMBERS_SIZE;
    cout << "Avg " << average << endl;
    
    for (int i = 0; i < NUMBERS_SIZE; i++)
    {
        if (numbers[i] > average)
        {
            cout << "Above " << numbers[i] << endl;
        }
        else
        {
            cout << "Below " << numbers[i] << endl;
        }
    }  
}