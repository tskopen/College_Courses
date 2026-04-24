/*
 * Header file declaring the Contacts Anonymous object Constructor
 *
 * Name:	Thor Kopenkoskey
 * Date:	April 24, 2026
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