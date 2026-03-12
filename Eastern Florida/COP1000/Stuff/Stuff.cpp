/*
 * Program to take user input convert Char's into a chyper
 *
 * Name:    Thor Kopenkoskey
 * Date:    Feburary 22, 2026
 */
 
#include <iostream>
#include <fstream>

using namespace std;

char convertChar(char c);

/*
 * Main - prompt user for file, convert file, output and close file.
 *
 * Return: 0
 */

int main() 
{
    string filename;
    cout << "File? ";
    cin >> filename;
    cout << endl;

    ifstream inFile(filename);

    char c;
    
    while (inFile.get(c)) 
    {
        cout << convertChar(c);
    }

    cout << endl;
    inFile.close();
    return 0;
}

/*
 * convertChar - Convert characters to various offsets based on category of Upper, lowercase, and numeric
 *
 * Parameter: char c - Character from file
 * Return: Converted character
 */

char convertChar(char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        char upper = c - 'a' + 'A';
        char shifted = ((upper - 'A' + 13) % 26) + 'A';
        return shifted;
    }
    else if (c >= 'A' && c <= 'Z') 
    {
        char lower = c - 'A' + 'a';
        char shifted = ((lower - 'a' + 13) % 26) + 'a';
        return shifted;
    }
    else if (c >= '0' && c <= '9') 
    {
        char shifted = ((c - '0' + 5) % 10) + '0';
        return shifted;
    }
    else 
    {
        return c;
    }
}