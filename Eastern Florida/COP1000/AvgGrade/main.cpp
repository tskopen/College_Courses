/*
 * Program to calculate average and curved average of test scores
 *
 * Name:    Thor Kopenkoskey
 * Date:    March 09, 2025
 */

#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

// Function prototype
void gradeAverage(int score1, int score2, int score3, double& gradeAverage, double& gradeAverageCurved);

/*
 * main - Take user input and send output from function
 *
 * Return:  status
 */
 
int main() 
{
    int score1;
    int score2;
    int score3;
    double avg;
    double curvedAvg; 

// Prompt user scores
    cout << "Tests? ";
    cin >> score1 >> score2 >> score3;

    gradeAverage(score1, score2, score3, avg, curvedAvg);

// Output results
    cout << "Average: " << avg << endl;
    cout << "Curved: " << curvedAvg << endl;

    return 0;
}

/*
 * gradeAverage - Calculates average
 *
 * Parameter: 3 score types and the 2 function outputs as pass by reference
 * Return: calculate and set gradeAverage, gradeAverageCurved variables for output use. Void function.
 */

void gradeAverage(int score1, int score2, int score3, double& gradeAverage, double& gradeAverageCurved) 
{
    gradeAverage = (score1 + score2 + score3) / 3.0;  // Ensure floating-point division
    gradeAverageCurved = sqrt(gradeAverage) * 10;
}
