/*
 * Program to print "row row row your boat" song
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 18, 2025
 */
#include <cmath>
#include <stdio.h>
#include <iostream>

using namespace std;
void promptSpeedAndTemp(double& speed, double& temperature);
double calculateWindChill(double speed, double temperature);

/*
 * main - Call functions to prompt user for wind chill, calculate, and output
 *
 * Return:  0
 */

int main()
{
	double speed;
	double temperature;

	promptSpeedAndTemp(speed, temperature);

	cout << "Wind Chill Factor = " << calculateWindChill(speed, temperature);
	cout << endl;

	return 0;
}

 /*
  * promptSpeedAndTemp - Prompt users to get speed and temperature
  *
  * Parameter: 	speed	        Wind Speed
  * Parameter: 	temperature	    Wind Temperature
  * Return:		VOID			VOID FUNCTION
  */

void promptSpeedAndTemp(double& speed, double& temperature)
{
	cout << "Wind Speed and Temperature? ";
	cin >> speed >> temperature;
	cout << endl;
}

/*
  * calculateWindChill - Calculate the wind chill
  *
  * Parameter: 	speed	      Wind Speed
  * Parameter: 	temperature	  Wind Temperature
  * Return:		W             Wind Chill
  */

double calculateWindChill(double speed, double temperature)
{
	double windChill = 35.74 + 0.6215 * temperature - 35.75 * pow(speed, 0.16) + 0.4275 * temperature * pow(speed, 0.16);
	return windChill;
}