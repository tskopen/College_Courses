#pragma once
#include <string>
#include <iostream>

using namespace std;

class Contact
{
    private:
        string name;
        string number;
        string email;
    public:
        Contact();
        Contact(string newName, string newNumber, string newEmail);
        ~Contact();

        void print() const;
};

