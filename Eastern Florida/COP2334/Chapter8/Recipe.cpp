/*
 * Take input of maximum 5 ingrediants and then scaling their measurement standards.
 *
 * Name:	Thor Kopenkoskey
 * Date:	March 22, 2026
 */


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_NUM_OF_INGREDIANTS = 5;

float quantity[MAX_NUM_OF_INGREDIANTS] = {};
string measurementInput[MAX_NUM_OF_INGREDIANTS] = {};
string ingrediantInput[MAX_NUM_OF_INGREDIANTS] = {};

void scaleImperialVolumeMeasurements(float quantity[], string measurementInput[], string ingrediantInput[], int index);

int main()
{  
  int ingrediantIndex = 0;
  int scale = 0;
  cout << "? ";
  cin >> quantity[0] >> measurementInput[0] >> ingrediantInput[0];
  cout << endl;

  //Do we need x x as stop conditions? x x just files cin but doesnt overcomplicate while stop logic. Cant have negative quantites so.
  while (ingrediantIndex < MAX_NUM_OF_INGREDIANTS && quantity[ingrediantIndex] > 0)
  {
    ingrediantIndex++;
    cout << "? ";
    cin >> quantity[ingrediantIndex] >> measurementInput[ingrediantIndex] >> ingrediantInput[ingrediantIndex];
    cout << endl;
  }

  cout << "Scale? ";
  cin >> scale;
  cout << endl;

  for (int i = 0; i <= ingrediantIndex - 1; i++)
  {
    quantity[i] *= scale;
  }
  //considered using enumeration and then incrementing the enumation type, however it I thought that was overengineering it.
  scaleImperialVolumeMeasurements(quantity, measurementInput, ingrediantInput, ingrediantIndex);

  for (int i = 0; i <= ingrediantIndex - 1; i++) // -1 removes sential
  {
    cout << fixed << setprecision(2) << quantity[i] << " " << measurementInput[i] << " " << ingrediantInput[i] << endl;
  }

  return 0;
}

/*
 * Functino to Scale Imperial Volume measurements to Chapter 8 standards, tsp, tbsp, vup, pt, qt.
 *
 * Parameter: 	float quantity[], string measurementInput[], string ingrediantInput[], int index
 * Return:		VOID
 */

void scaleImperialVolumeMeasurements(float quantity[], string measurementInput[], string ingrediantInput[], int index)
{
  for (int i = 0; i <= index - 1; i++)
  {
    if (measurementInput[i] == "tsp" && quantity[i] >= 3)
    {
        quantity[i] = quantity[i] / 3.0;
        measurementInput[i] = "Tbsp";
    }
    if (measurementInput[i] == "tbsp" && quantity[i] >= 4)
    {
        quantity[i] = quantity[i] / 16.0;
        measurementInput[i] = "cup";
    }
    if (measurementInput[i] == "cup" && quantity[i] >= 2)
    {
        quantity[i] = quantity[i] / 2.0;
        measurementInput[i] = "pt";
    }
    if (measurementInput[i] == "pt" && quantity[i] >= 2)
    {
        quantity[i] = quantity[i] / 2.0;
        measurementInput[i] = "qt";
    }
  }
}