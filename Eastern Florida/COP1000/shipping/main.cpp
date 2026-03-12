/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
To do:
- calculate number of full boxes
- calculate cost to ship full boxes
- calculate the number of cans leftover
- output number of full boxes
- output cost to ship full boxes
- output number cans not shipped (cans leftover)
*/
#include <iostream>
using namespace std;


const double PRICE_PER_BOX = 7.50;
const double TAX_RATE = 0.05;

int main()
{
    int numCans;
    int cansPerBox;
    int numBoxes;
    int numLeftover;
    double pricePerShipment;

    //prompt for number of numCans and cansPerBox
    cout << "Enter number of numCans: ";
    cin >> numCans;
    
    cout << "Enter number of cansPerBox: ";
    cin >> cansPerBox;
    
    //calculate shipping
    // how many boxes needed * shipping price
    numBoxes = numCans / cansPerBox;
    numLeftover= numCans % cansPerBox;
cout << "KP: " << numBoxes << " " << numLeftover << endl;

    //shipping
    pricePerShipment = numBoxes * PRICE_PER_BOX;
    cout << "KP: Pretax = " << pricePerShipment;
    
    pricePerShipment += pricePerShipment * TAX_RATE;
    cout << "KP: Posttax = " << pricePerShipment << endl;
    
    //outputs
    cout << "Ship: " << numBoxes << " Boxes for $" << pricePerShipment << endl;
    cout << "Not shipped: " << numLeftover << " cans" << endl;
    return 0;
}