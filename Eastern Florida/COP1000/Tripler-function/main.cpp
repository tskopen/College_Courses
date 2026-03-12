/*
 * Program to create a tripler 
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 05, 2025
 */

#include <iostream>
using namespace std;
 
int tripler(int num);

/*
 * main - Take user input and print function
 *
 * Return:  status
 */
 
int main()
{
    int num = 0;
    cout << "Number? ";
    cin >> num;
    
    cout << "Tripled is " << tripler(num) << endl;
}

/*
 * tripler - Triples Number
 *
 * Parameter: number inputed variable tripled
 * Return:  status
 */
 
int tripler(int num)
{
    return num * 3;
}
