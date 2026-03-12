/*
 * Program to take user's 6 numbers, sort them, and calculate the min, min and median of the array
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 9, 2025
 */
 

#include <string>
#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    Book myBook;

    myBook.setTitle("The Cat in the Hat");
    myBook.setAuthor("Dr. Seuss");
    myBook.setDatePub(1957);
    
    cout << myBook.getTitle() << " by " << myBook.getAuthor() 
    << " published in " << myBook.getDatePub() << endl;
}