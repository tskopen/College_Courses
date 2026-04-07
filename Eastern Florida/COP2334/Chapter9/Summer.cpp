/*
 * Create a database matrix of activitys with the weeks their correlated too
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 5, 2026
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_ACTIVITIES = 4;
const int NUM_WEEKS = 3;

/*
 * Main function to collect user data and format into matrix.
 *
 * Return:	0
 */

int main() 
{
    string activities[NUM_ACTIVITIES] = { "archery", "swimming", "ceramics", "biking" };
    
    int enrollments[NUM_ACTIVITIES][NUM_WEEKS] = { 0 };

    string activityInput;
    int weekInput;
    bool done = false;

    while (!done) 
    {
        cout << "Activity? ";
        cin >> activityInput;
        cout << endl;

        if (activityInput == "done") 
        {
            done = true;
        } 
        else 
        {
            int activityIndex = -1;
            for (int i = 0; i < NUM_ACTIVITIES; ++i) 
            {
                if (activities[i] == activityInput) 
                {
                    activityIndex = i;
                }
            }

            if (activityIndex != -1) 
            {
                cout << "Week? ";
                cin >> weekInput;
                cout << endl;

                if (weekInput >= 1 && weekInput <= NUM_WEEKS) 
                {
                    enrollments[activityIndex][weekInput - 1]++;
                } 
                else 
                {
                    cout << "Invalid week" << endl;
                }
            } 
            else 
            {
                cout << "Invalid activity" << endl;
            }
        }
    }
    
    cout << setfill(' ') << right;

    for (int i = 0; i < NUM_ACTIVITIES; ++i) 
    {
        cout << setw(12) << activities[i];
        for (int j = 0; j < NUM_WEEKS; ++j) 
        {
            cout << setw(5) << enrollments[i][j];
        }
        cout << endl;
    }

    return 0;
}