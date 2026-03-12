/*
 * Program to take user input and find the average of an array, and what numbers are below/above
 *
 * Name:    Thor Kopenkoskey
 * Date:   March 30, 2025
 */

#include <iostream>
#include <string>
using namespace std;

const int EMPLOYEE_ARRAY_SIZE = 4;

void employeeSalaryCalculations(int employeeSalary[EMPLOYEE_ARRAY_SIZE]);
void printEmployeeSalary(int employeeSalary[EMPLOYEE_ARRAY_SIZE], string employeeName[EMPLOYEE_ARRAY_SIZE]);

/*
 * main - Take user input and find the average of an array, and what numbers are below/above
 *
 * Return:  status
 */

int main()
{
    int employeeSalary[EMPLOYEE_ARRAY_SIZE];
    string employeeName[EMPLOYEE_ARRAY_SIZE];
    for (int i = 0; i < EMPLOYEE_ARRAY_SIZE; i++)
    {
        cout << "Name salary? ";
        cin >> employeeName[i];
        cin >> employeeSalary[i];
        cout << endl;
    }
    employeeSalaryCalculations(employeeSalary);
    printEmployeeSalary(employeeSalary, employeeName);
    
    return 0;
}

/*
 * employeeSalaryCalculations - find the costOfLiving and apply it to the salary
 *
 * Parameter: employeeSalary[i] is array with all salarys, EMPLOYEE_ARRAY_SIZE the amount of numbers in array to check
 * Return: updatead salaries with cost of living
 */
 
void employeeSalaryCalculations(int employeeSalary[EMPLOYEE_ARRAY_SIZE])
{
    float costOfLiving;
    cout << "Cost of living? ";
    cin >> costOfLiving;
    cout << endl;
    for (int i = 0; i < EMPLOYEE_ARRAY_SIZE; i++)
    {
        employeeSalary[i] = employeeSalary[i] * (1 + (costOfLiving / 100));
    }
}

/*
 * printEmployeeSalary - find the total of the employeeSalary array, and print out the values
 *
 * Parameter: employeeSalary is salarys array, EMPLOYEE_ARRAY_SIZE the amount of numbers in array to check
 * Return: print total salary and list of salaries
 */
 
void printEmployeeSalary(int employeeSalary[EMPLOYEE_ARRAY_SIZE], string employeeName[EMPLOYEE_ARRAY_SIZE])
{
    int totalSalary = 0;
    
    for (int i = 0; i < EMPLOYEE_ARRAY_SIZE; i++)
    {
        totalSalary += employeeSalary[i];
    }
    
    for (int i = 0; i < EMPLOYEE_ARRAY_SIZE; i++)
    {
        cout << employeeName[i] << " $" << employeeSalary[i] << endl;
    }
    cout << endl;
    cout << "Total payroll: $" << totalSalary << endl;
}
