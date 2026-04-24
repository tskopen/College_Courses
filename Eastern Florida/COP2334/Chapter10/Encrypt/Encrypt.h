/*
 * Header file for Encrypt.cpp
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Encrypt
{
    private:
        string cipher;
        string plainText;
     
    public:
        Encrypt();
        void setPlainText(string input);
        void setCipherText(string input);

        string getCipher();

        string encryptCipher(string input);
        string decryptCipher(string input);
        
        int seqSearchStr(const string &list, int listLength, char searchItem);
};