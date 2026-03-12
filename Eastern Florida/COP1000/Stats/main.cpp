/*
 * Program to take user's 6 numbers, sort them, and calculate the min, min and median of the array
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 9, 2025
 */

#include <iostream>
using namespace std;

const int NUM_NUMBERS = 6;

void bubbleSort(int list[], int listSize);

/*
 * main - Take user input, call sorting function, and print
 *
 * Return:  status
 */

int main()
{
    int numbers[NUM_NUMBERS];
    cout << "Numbers? ";
    for (int i = 0; i < NUM_NUMBERS; i++)
    {
        cin >> numbers[i];
    }
    
    cout << endl;
    
    bubbleSort(numbers, NUM_NUMBERS);
    
    int minNum = numbers[0];
    int maxNum = numbers[NUM_NUMBERS - 1];
    int median = (numbers[2] + numbers[3]) / 2;
    
    cout << "Min: " << minNum << endl;
    cout << "Max: " << maxNum << endl;
    cout << "Median: " << median << endl;
}

/*
 * bubbleSort - sort a list of integers
 *
 * Parameter:  list - list to be sorted
 * Parameter:  listSize - number of elements in the list
 * Return:     nothing
 */
 
void bubbleSort(int list[], int listSize)
{
    int tmp;
    
    for (int i = 0; i < (listSize - 1); i++)
    {    
        for (int j = 0; j < (listSize - 1); j++)
        {    
            if (list[j] > list[j + 1])
            {
                // swap elements
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}