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

const int NUM_DAYS = 7;
const int NUM_HOURS = 10;
const int MAX_EVENTS = 10;

const string DAYS[NUM_DAYS] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

struct Event
{
    string name;
    string day;
    int start;
    int end;
};

int getDayIndex(string day);
int readEvent(string calendar[NUM_HOURS][NUM_DAYS], Event events[]);
void printCalendar(string calendar[NUM_HOURS][NUM_DAYS]);
void printEvents(Event events[], int count);

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

    Event events[MAX_EVENTS];

    int count = readEvent(calendar, events);

    printCalendar(calendar);

    cout << endl;

    printEvents(events, count);

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

int readEvent(string calendar[NUM_HOURS][NUM_DAYS], Event events[]) 
{
    string name;
    string day;
    int start;
    int end;
    int count = 0;

    cout << "? ";
    cin >> name >> day >> start >> end;
    cout << endl;

    while (name != "done")
    {
        events[count].name = name;
        events[count].day = day;
        events[count].start = start;
        events[count].end = end;

        int dayIndex = getDayIndex(day);

        for (int h = start; h < end; h++)
        {
            int hourIndex = h - 8;

            if (h == start)
            {
                calendar[hourIndex][dayIndex] = name;
            }
            else
            {
                calendar[hourIndex][dayIndex] = ""; // blank space
            }
        }

        count++;

        cout << "? ";
        cin >> name >> day >> start >> end;
        cout << endl;
    }

    return count;
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

/*
 * Function to print calendar events with time details in text format
 *
 * Parameter: 	Event events[] - matrix for calendar items
  * Parameter: 	int count - index counter
 * Return:	VOID
 */

void printEvents(Event events[], int count)
{
    cout << right << setfill('0');
    for (int i = 0; i < count; i++)
    {
        cout << events[i].name << " on " << events[i].day << " ";

        cout << setw(2) << events[i].start << ":00" << " to ";
        cout << setw(2) << events[i].end << ":00" << endl;
    }
}