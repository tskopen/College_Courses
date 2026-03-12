/*
 * Program to take user's 6 numbers, sort them, and calculate the min, min and median of the array
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 9, 2025
 */
#include <string>
#include <iostream>
using namespace std;

const int NUM_FRUITS = 4;

void bubbleSort(int mainList[], string parallelList[], int listSize);

/*
 * main - Take user input, call sorting function, and print
 *
 * Return:  status
 */

int main()
{
    string searchFruit;
    
    string fruits[NUM_FRUITS] = {"apple", "banana", "pear", "orange"};
    int fruitPrice[NUM_FRUITS] = {130, 110, 80, 100};
    

    cout << "Fruit? ";
    cin >> searchFruit;
    
    cout << endl;
    
    bubbleSort(fruitPrice, fruits, NUM_FRUITS);

}

/*
 * bubbleSort - sort a list of integers (descending)
 * keeping parallel string list in tact
 *
 * Parameter:  list - list to be sorted
 * Parameter:  parallelList - parallel list to keep in synch
 * Parameter:  listSize - number of elements in the list
 * Return:     nothing
 */
void bubbleSort(int mainList[], string parallelList[], int listSize)
{
    bool done;
    int i;
    int tmpMain;
    string tmpParallel;

    done = false;
    i = 0;    
    while (!done)
    {
        done = true;
        for (int j = 0; j < (listSize - i - 1); j++)
        {    
            if (mainList[j] < mainList[j + 1])
            {
                // swap elements
                tmpMain = mainList[j];
                mainList[j] = mainList[j + 1];
                mainList[j + 1] = tmpMain;
                
                // swap elements in parallelList
                tmpParallel = parallelList[j];
                parallelList[j] = parallelList[j + 1];
                parallelList[j + 1] = tmpParallel;

                done = false;
            }
        }
        i++;
    }
}
