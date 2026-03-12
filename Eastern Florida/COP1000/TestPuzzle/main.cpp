/*
 * Program to take user's puzzle name, piece count, length, and width and apply it to a class for printout
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 20, 2025
 */
 
#include <string>
#include <iostream>
#include "Puzzle.h"
using namespace std;

/*
 * main - Take user input, upload to puzzle class, and print method
 *
 * Return: Output puzzle details
 */
 
int main()
{
    string tmpDescript;
    int tmpPieceNum;
    double tmpLength;
    double tmpWidth;
    
    Puzzle puzzle;
    cout << "Description pieces length width? ";
    cin >> tmpDescript >> tmpPieceNum >> tmpLength >> tmpWidth;
    cout << endl;
    
    puzzle.setDescript(tmpDescript);
    puzzle.setPieceNum(tmpPieceNum);
    puzzle.setLength(tmpLength);
    puzzle.setWidth(tmpWidth);

    puzzle.print();

}