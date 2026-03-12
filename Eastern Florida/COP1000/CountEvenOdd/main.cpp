/*
 * Program to print amount of even/odd numbers and the total numbers.
 *
 * Name:    Thor Kopenkoskey
 * Date:   Febuary 12, 2025
 */

#include <iostream>
using namespace std;

/*
 * main - counts amount of even/odd numbers and the total numbers.
 *
 * Return:  status
 */

int main()
{
    int totalNum = 0;
	int num = 0;
	int even = 0;
	int odd = 0;

	cout << "Number? ";
	cin >> num;
    cout << endl;
	while (num >= 0)
	{

	    //Add to total number count 
	    totalNum++;
	    
	    if ((num % 2) > 0)
	    {
	        odd++;
	    }
        else
	    {
	        even++;
	    }
		cout << "Number? ";
	    cin >> num;
        cout << endl;
	}

    cout << "Entered: " << totalNum;
    cout << endl;
    cout << "Even: " << even;
    cout << endl;
    cout << "Odd: " << odd;
    cout << endl;
    
    return 0;
}