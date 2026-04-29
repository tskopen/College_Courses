/*
 * Implementation file to read desired file and cipher direction, and give desired output.
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include "Course.h"

using namespace std;

const int NUM_COURSES = 3;

int main()
{
    int location = 0;
    string tempNameInput;

    Course courses[NUM_COURSES];

    courses[0] = Course("COP1000", "Principles of Programming", 3);
    courses[1] = Course("COP2334", "Intro to C++", 3);
    courses[2] = Course("COP2335", "Advanced C++", 3);

    cout << "Name? ";
    cin >> tempNameInput;
    cout << endl;

    location = courses[0].seqSearchStr(courses, NUM_COURSES, tempNameInput);


    courses[location].printCourse();
}