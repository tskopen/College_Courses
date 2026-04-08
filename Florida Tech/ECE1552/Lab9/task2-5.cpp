#include <iostream>
#include <string>
#include <iomanip>  
#include <string>  

using namespace std;

const int numStudents = 7;
string students[numStudents] = {"Zane", "Finn", "Alex", "Aruna", "Andrew", "Mac", "Nicolas"};

bool findStudent(string studentName);

string attendance[7][2] = 
{
    {"Zane", "PRESENT"},
    {"Finn", "ABSENT"},
    {"Alex", "PRESENT"},
    {"Aruna", "ABSENT"},
    {"Andrew", "ABSENT"},
    {"Mac", "PRESENT"},
    {"Nicolas", "PRESENT"}
};

void AbsentList();
int PresentPersons();

int scores[] = {98, 56, 79, 90, 32, 89, 67, 88, 0, 100, 46, 53, 84, 86, 91, 76};

const int numScores = 16;

void studentMetrics();

int image[6][4] = 
{
    {45, 38, 255, 78},
    {127, 34, 180, 197},
    {100, 105, 45, 45},
    {189, 189, 202, 205},
    {167, 123, 156, 99},
    {10, 10, 23, 145}
};

void binarize(int threshold);

int main() 
{
    // task 2
    string searchName;
    cout << "task 2: Find Student" << endl;
    cout << "Enter student name to search: ";
    cin >> searchName;
    
    if (findStudent(searchName)) 
    {
        cout << searchName << " is in the class." << endl;
    } else 
    {
        cout << searchName << " is NOT in the class." << endl;
    }
    cout << endl;

    // task 3
    cout << "task 3: attendance" << endl;
    cout << "Absent students: " << endl;
    AbsentList();
    cout << "Number of present students: " << PresentPersons() << endl << endl;

    // task 4
    cout << "task 4: student Metrics" << endl;
    studentMetrics();
    cout << endl;

    // task 5
    cout << "task 5: Binarize Image" << endl;
    int threshold;
    cout << "Enter threshold for binarization: ";
    cin >> threshold;
    binarize(threshold);

    cout << "Binarized image:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Definations

bool findStudent(string studentName) 
{
    for (int i = 0; i < numStudents; i++) 
    {
        if (students[i] == studentName) return true;
    }
    return false;
}

void AbsentList() 
{
    for (int i = 0; i < 7; i++) 
    {
        if (attendance[i][1] == "ABSENT") 
        {
            cout << attendance[i][0] << endl;
        }
    }
}

int PresentPersons() 
{
    int count = 0;
    for (int i = 0; i < 7; i++) 
    {
        if (attendance[i][1] == "PRESENT") count++;
    }
    return count;
}

void studentMetrics() 
{
    int minScore = scores[0];
    int maxScore = scores[0];
    int sum = 0;

    for (int i = 0; i < numScores; i++) 
    {
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
        sum += scores[i];
    }

    double average = static_cast<double>(sum) / numScores;

    cout << "Lowest score: " << minScore << endl;
    cout << "Highest score: " << maxScore << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;
}

void binarize(int threshold) 
{
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (image[i][j] > threshold)
                image[i][j] = 255;
            else
                image[i][j] = 0;
        }
    }
}