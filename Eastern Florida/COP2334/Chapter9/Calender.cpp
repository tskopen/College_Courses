/*
 * Sort user data into a calendar matrix.
 *
 * Name:	Thor Kopenkoskey
 * Date:	March 18, 2026
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
ew
const int NUM_DAYS = 7;
const int NUM_HOURS = 10;

const string DAYS[NUM_DAYS] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

int getDayIndex(string day); 
void readEvent(string calendar[NUM_HOURS][NUM_DAYS]); 
void printCalendar(string calendar[NUM_HOURS][NUM_DAYS]);

/*
 * Main function to collect user data and format calender with a matrix.
 *
 * Return:	0
 */

int main() 
{
    string calendar[NUM_HOURS][NUM_DAYS];
    for (int i = 0; i < NUM_HOURS; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            calendar[i][j] = "________";
        }
    }

    readEvent(calendar);
    
    printCalendar(calendar);
    
    return 0;
}

/*
 * Function to get the index of a day string
 *
 * Parameter: 	String day - user requested day
 * Return:	day index, or -1 error
 */

int getDayIndex(string day) 
{
    for (int i = 0; i < NUM_DAYS; i++) 
    {
        if (DAYS[i] == day)
        {
            return i;
        }
    }
    return -1;
}

/*
 * Function to read user data
 *
 * Parameter: 	string calendar[NUM_HOURS][DAYS] - matrix for calendar items
 * Return:	VOID
 */

void readEvent(string calendar[NUM_HOURS][NUM_DAYS]) 
{
    string name;
    string day;
    int hour;
    
    cout << "? ";
    cin >> name >> day >> hour;
    cout << endl;

    while (name != "done") 
    {
        int dayIndex = getDayIndex(day);
        int hourIndex = hour - 8;
        calendar[hourIndex][dayIndex] = name;
        
        cout << "? ";
        cin >> name >> day >> hour;
        cout << endl;

    }
}

/*
 * Function to print calendar according to specifications with user data saved in matrix.
 *
 * Parameter: 	string calendar[NUM_HOURS][DAYS] - matrix for calendar items
 * Return:	VOID
 */

void printCalendar(string calendar[NUM_HOURS][NUM_DAYS]) 
{
    
    cout << "      ";
    for (int i = 0; i < NUM_DAYS; i++)
    {
        cout << setw(8) << left << DAYS[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < NUM_HOURS; i++) 
    {
        cout << setw(2) << right << setfill('0') << (i + 8) << ":00 " << setfill(' ');

        for (int j = 0; j < NUM_DAYS; j++) 
        {
            cout << setw(8) << left << calendar[i][j] << " ";
        }
        cout << endl;
    }
}