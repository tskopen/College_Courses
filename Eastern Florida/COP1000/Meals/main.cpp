#include <iostream>
using namespace std;


const double adultMealsCost = 9.95;
const double kidMealsCost = 6.25;
const double cookiesCost = 1.25;



int main()
{
	// Variables
		string groupName;
		int adultMeals;
		int kidMeals;
		int cookies;
		int tipRate;
	//Order is just the foods cost, total cost includes tiprate
		double orderCost;
		double totalCost;
		
	//What Group
		cout << "Group? ";
		cin >> groupName;
		
	//Order Inputs
		cout << "Adult meals? "; 
		cin >> adultMeals;
		cout<< endl;
		
		cout << "Kids meals? "; 
		cin >> kidMeals;
		cout<< endl;
				
		cout << "Cookies? ";
		cin >> cookies;
		cout<< endl;		
	//Costs of order
		orderCost =  ( (adultMeals * adultMealsCost) + (kidMeals * kidMealsCost) + (cookies * cookiesCost) );
		
	//input tip
		cout << "Tip rate? ";
		cin >> tipRate;
	
	//Calculate total
		totalCost = orderCost + (orderCost * tipRate/100);
		cout << "***** " << groupName <<" *****" << endl;
		cout << "Sub-total: "<< orderCost << endl;
		cout << "Tip:" << (orderCost * tipRate/100) << endl;
		cout <<"Total: "<< totalCost;
}