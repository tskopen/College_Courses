/*
 * Implementation file to read desired file and cipher direction, and give desired output.
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */
#include <iostream>
#include <string>

using namespace std;

class Course
{
    private:
        string name;
        string description;
        double credits;

    public:
        Course();
        Course(string n, string desc, double c);

        void printCourse() const;
        int seqSearchStr(const Course courses[], int listLength, string searchItem);
};
