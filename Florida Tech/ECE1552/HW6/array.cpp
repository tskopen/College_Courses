
#include <iostream>

using namespace std;

const int ARRAY_SIZE = 20;

void filterArray(int array[], int MIN, int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i ++)
    {
        if (array[i] < MIN)
        {
            cout << array[i] << " ";
        }
    }
}

int main()
{
    int MIN;
    int array[ARRAY_SIZE] = {1, 2, 52, 93, 10, 23, 83, 90, 74, 10,
                             10, 22, 32, 53, 16, 33, 93, 20, 64, 53};
                   
    cout << "Please enter desired max number: ";
    cin >> MIN;
    
    filterArray(array, MIN, ARRAY_SIZE);
    
    
}

