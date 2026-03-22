/*
 * Take input of maximum 5 ingredients and then scaling their measurement standards.
 *
 * Name:	Thor Kopenkoskey
 * Date:	March 22, 2026
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_NUM_OF_INGREDIENTS = 5;

void scaleImperialVolumeMeasurements(float quantity[], string measurementInput[], string ingredientInput[], int index);

  /*
  * Main function to take user input and call functions to Scale Imperial Volume measurements to Chapter 8 standards, tsp, Tbsp, vup, pt, qt.
  *
  * Return:	0
  */

int main()
{  
    float quantity[MAX_NUM_OF_INGREDIENTS] = { };
    string measurementInput[MAX_NUM_OF_INGREDIENTS] = { };
    string ingredientInput[MAX_NUM_OF_INGREDIENTS] = { };

    int ingredientIndex = 0;
    float scale = 0;
    cout << "? ";
    cin >> quantity[0] >> measurementInput[0] >> ingredientInput[0];
    cout << endl;

    while (ingredientIndex < MAX_NUM_OF_INGREDIENTS && quantity[ingredientIndex] != -1)
    {
        ingredientIndex++;
        cout << "? ";
        cin >> quantity[ingredientIndex] >> measurementInput[ingredientIndex] >> ingredientInput[ingredientIndex];
        cout << endl;
    }
    if (quantity[ingredientIndex] == -1)
    {
        ingredientIndex--; //Remove termination input from array index.
    }

    cout << "Scale? ";
    cin >> scale;
    cout << endl;

    for (int i = 0; i <= ingredientIndex; i++)
    {
        quantity[i] *= scale;
    }

    scaleImperialVolumeMeasurements(quantity, measurementInput, ingredientInput, ingredientIndex);

    for (int i = 0; i <= ingredientIndex; i++)
    {
        cout << fixed << setprecision(2) << quantity[i] << " " << measurementInput[i] << " " << ingredientInput[i] << endl;
    }

    return 0;
}

  /*
  * Function to Scale Imperial Volume measurements to Chapter 8 standards, tsp, tbsp, vup, pt, qt.
  *
  * Parameter: 	float quantity[], string measurementInput[], string ingredientInput[], int index
  * Return:		VOID
  */

void scaleImperialVolumeMeasurements(float quantity[], string measurementInput[], string ingredientInput[], int index)
{
    for (int i = 0; i <= index; i++)
    {
        while (measurementInput[i] == "tsp" && quantity[i] >= 3)
        {
            quantity[i] = quantity[i] / 3.0;
            measurementInput[i] = "Tbsp";
        }
        while (measurementInput[i] == "Tbsp" && quantity[i] >= 4)
        {
            quantity[i] = quantity[i] / 16.0;
            measurementInput[i] = "cup";
        }
        while (measurementInput[i] == "cup" && quantity[i] >= 2)
        {
            quantity[i] = quantity[i] / 2.0;
            measurementInput[i] = "pt";
        }
        while (measurementInput[i] == "pt" && quantity[i] >= 2)
        {
            quantity[i] = quantity[i] / 2.0;
            measurementInput[i] = "qt";
        }
    }
}