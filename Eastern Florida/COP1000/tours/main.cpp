/*
 * Program to print calculate cost of a trip
 *
 * Name:    Thor Kopenkoskey
 * Date:   January 28, 2025
 */

#include <iostream>
using namespace std;

//costs variables
const int TRIP_COST = 495;
const int WIFI_UPGRADE_COST = 35;
const int RAFTING_EXCURSION_COST = 45;
const int HIKING_EXCURSION_COST = 25;
const double TAX_RATE = 6.5;

/*
 * main - calculates cost of a trip 
 *
 * Return:  status
 */
 
int main()
{
//Variables
    int totalPeople;
    int wifiUpgrades;
    int raftingExcursions;
    int hikingExcursions;
    
    double preTaxCost;
    double postSaleCost;
    double taxCost;
    double postTaxCost;
    double discount;
//Inputs
    cout << "Total people? ";
    cin >> totalPeople;
    cout << endl;
    
    cout << "Wifi upgrades? ";
    cin >> wifiUpgrades;
    cout << endl;
    
    cout << "Rafting excursions? ";
    cin >> raftingExcursions;
    cout << endl;
    
    cout << "Hiking excursions? ";
    cin >> hikingExcursions;
    cout << endl;
    
//Cost calcualations
    preTaxCost = (totalPeople * TRIP_COST) + (wifiUpgrades * WIFI_UPGRADE_COST) + (raftingExcursions * RAFTING_EXCURSION_COST) + ( hikingExcursions * HIKING_EXCURSION_COST);
    cout << "Cost $" << preTaxCost << endl;
//Discount + tax (6.5%)  
    cout << "Discount? ";
    cin >> discount;
    cout << endl;
    
    postSaleCost = preTaxCost - (preTaxCost * (discount / 100));
    taxCost = postSaleCost * (TAX_RATE / 100);
    postTaxCost = postSaleCost + postSaleCost * (TAX_RATE / 100);
//Final outputs

    cout << "Sale   $" << postSaleCost << endl;
    
    cout << "Tax    $" << taxCost << endl;
    
    cout << "Final  $" << postTaxCost << endl;
    
}