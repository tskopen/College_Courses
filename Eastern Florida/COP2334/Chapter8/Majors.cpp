/*
 * Take input of 5 majors with student numbers and create catalog showing percent of population.
 *
 * Name:	Thor Kopenkoskey
 * Date:	March 22, 2026
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_NUM_OF_MAJORS = 5;

int calcTotalPopulation(int quantityInput[]);
int mostPopular(int quantityInput[]);

/*
 * Take user input and call functions to print majors enrollment numbers, percents, and most popular degree.
 * 
 * Return:	status 0
 */

int main()
{  
    string majorsInput[MAX_NUM_OF_MAJORS] = { };
    int quantityInput[MAX_NUM_OF_MAJORS] = { };

    for (int i = 0; i < MAX_NUM_OF_MAJORS; i++)
    {
        cout << "Major Count? ";
        cin >>  majorsInput[i] >> quantityInput[i];
        cout << endl;
    }

    int totalPopulation = calcTotalPopulation(quantityInput);

    cout << left << setfill(' ') << setw(10) << "Major"  << setw(10) <<  "Enrolled" << "Percent" << endl;

    for (int i = 0; i < MAX_NUM_OF_MAJORS; i++)
    {
        float percent = static_cast<float>(quantityInput[i]) / static_cast<float>(totalPopulation) * 100;
        cout << left << setfill(' ') << setw(10) << majorsInput[i] << setw(10) << quantityInput[i] << fixed << setprecision(2) << percent << endl;
    }

    int popularIndex = mostPopular(quantityInput);
    cout << endl;
    cout << "Total Enrolled: " << totalPopulation << endl;
    cout << "Most Popular: " << majorsInput[popularIndex] << endl; 
    return 0;
}

/*
 * Use for loop to calculate total student population/body
 *
 * Parameter: 	int quantityInput[]
 * Return:		tmpPopulation
 */

int calcTotalPopulation(int quantityInput[])
{
    int tmpPopulation = 0;

    for (int i = 0; i < MAX_NUM_OF_MAJORS; i++)
    {
        tmpPopulation += quantityInput[i];
    }

    return tmpPopulation;
}

/*
 * Use for loop to calculate most popular major
 *
 * Parameter:   int quantityInput[]
 * Return:		tmpPopularIndex
 */

int mostPopular(int quantityInput[])
{
    int tmpPopularIndex = 0;

    for (int i = 0; i < MAX_NUM_OF_MAJORS; i++)
    {
        if (quantityInput[i] > quantityInput[tmpPopularIndex])
        {
            tmpPopularIndex = i;
        }
    }

    return tmpPopularIndex;
}