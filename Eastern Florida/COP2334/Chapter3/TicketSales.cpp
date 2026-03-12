
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int price = 0;
	int ticketsSold = 0;
	int totalTickets = 0;
	int totalSale = 0;

	string input;
	string output;

	ifstream inFile;
	ofstream outFile;

	string event;
	string time;
	string location;

	cout << "Input name ? ";
	cin >> input;

	inFile.open(input);
	cout << endl;

	for (int i = 0; i <= 3; i++)
	{
		inFile >> price >> ticketsSold;
		totalTickets += ticketsSold;
		totalSale += (ticketsSold * price);
	}
	cin >> output;



	//couldnt get the getline to ignore white space before time runs out
	//didnt start on other parts

	inFile.ignore(255, '\n');
	getline(inFile, event);
	getline(inFile, time);
	getline(inFile, location);

	cout << event << " on " << time << " at " << location << endl;
	cout << "Total tickets = " << totalTickets << endl;
	cout << "Sale amount = $" << totalSale << endl;

	outFile.open(output);

	outFile << event << " on " << time << " at " << location << endl;
	outFile << "Total tickets = " << totalTickets << endl;
	outFile << "Sale amount = $" << totalSale << endl;
}