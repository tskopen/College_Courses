/*
 * Contact - header file
 * - defines template of Contact class
 *
 * Name: [Fill in your name]
 * Date: [Fill in the date]
 */
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Contacts
{
    private:
        string name;
        string number;
        string email;
    public:
        Contacts();
        Contacts(string newName, string newNumber, string newEmail);
        ~Contacts();

        void print() const;
};