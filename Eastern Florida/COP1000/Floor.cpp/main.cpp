/*
 * Program to figure out how many boxes of flooring materials are needed.
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 26, 2025
 */

#include <iostream>
using namespace std;

const double BOX_COST = 21.95;
const int BOX_FOOTAGE = 40;

/*
 * main - Figure out how many boxes of flooring materials are needed. Balances not giving more boxes then needed while also giving some overage
 * 
 * Return:  status
 */
 
int main()
{
    //Variables
    double width;
    double length;
    double overagePercent;
    
    double dblBoxes;
    int intBoxes;
    
    double minFloorArea;
    double maxFloorArea;
    
    double cost;

    //dimensions needed
    cout << "Length width: ";
    cin >> length >> width;
    cout << endl;
    
    //margins needed
    cout << "Overage: ";
    cin >> overagePercent;
    overagePercent = (overagePercent / 100) + 1;
    cout << endl;
    
    //calc floor area
    minFloorArea = length * width;
    maxFloorArea = minFloorArea * overagePercent;
    
    //rounds intBoxes
    maxFloorArea += 20;
    intBoxes =  maxFloorArea / 40;
    
    //cost
    cost = intBoxes * BOX_COST;
    cout << "Boxes: " << intBoxes << endl;
    cout << "Cost: " << "$" << cost << endl;
   
}