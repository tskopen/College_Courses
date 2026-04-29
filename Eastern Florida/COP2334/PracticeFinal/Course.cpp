/*
 * Implementation file to read desired file and cipher direction, and give desired output.
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */
#include "Course.h"


using namespace std;


Course::Course()
{

}

Course::Course(string n, string desc, double c)
{
    name = n;
    description = desc;
    credits = c;
}

void Course::printCourse() const
{
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Credits: " << credits << endl;
}

int Course::seqSearchStr(const Course courses[], int listLength, string searchItem)
{
    int loc = 0;
    bool found = false;

    while (loc < listLength && !found)
    {
        if (courses[loc].name == searchItem)
        {
            found = true;
        }
        else
        {
            loc++;
        }
    }
    if (found)
    {
        return loc;
    }
    else
    {    
        return -1;
    }
}