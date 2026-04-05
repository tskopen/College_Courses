/*
* 24. Rock Paper Scissors Program
* Program to play Rock Paper Scissors against USER
*
* Name:    Thor Kopenkoskey
* Date:    4/2/2026
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void stringToNum(string& input, int& user);
string numToString(int& input);
void runResults(int& user, int& computer);

int main()
{
    srand(time(0));

    string input = "DEFAULT";
    int computer = 0;
    int user = 0;

    while (user == computer)
    {
        computer = (rand() % 3) + 1;

        cout << "Please Enter, ROCK, PAPER, or SCISSORS: ";
        cin >> input;

        //Convert INPUT to CAPS to standarize input and improve usability.
        for (auto& x : input) 
        {
            x = toupper(x);
        }

        cout << endl;

        stringToNum(input, user);

        runResults(user, computer);
    }
}

void stringToNum(string& input, int& user)
{
    if(input == "ROCK")
    {
        user = 1;
    }
    else if(input == "PAPER")
    {
        user = 2;
    }
    else if(input == "SCISSORS")
    {
        user = 3;
    }
    else
    {
        cout << endl << "INVALID" << endl;
    }
}

string numToString(int& input)
{
    string output = "";
    if (input == 1)
    {
        output = "ROCK";
    }
    else if (input == 2)
    {
        output = "PAPER";
    }
    else if (input == 3)
    {
        output = "SCISSORS";
    }
    else
    {
        cout << endl << "INVALID" << endl;
    }
    return output;
}

void runResults(int& user, int& computer)
{
    cout << "COMPUTER: " << numToString(computer) << endl;

    int result = (user - computer + 3) % 3;
    if (result == 1)
    {
        cout << "YOU WON" << endl;
    }
    else if (result == 2)
    {
        cout << "YOU LOST"<< endl;
    }
    else
    {
        cout << "TIE"<< endl;
    }
}