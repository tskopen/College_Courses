/*
 * Implementation file to read desired file and cipher direction, and give desired output.
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include "Encrypt.h"

/*
 * Program to read desired file and cipher direction, and give desired output.
 *
 * Return:		0
 */
int main()
{
    Encrypt encrypt;

    string fileName;
    string direction;
    string plainInput;
    string cipherInput;
    string message;

    cout << "Key Dir? ";
    cin >> fileName >> direction;
    cout << endl;

    ifstream inFile(fileName);

    if (inFile)
    {
        getline(inFile, plainInput);
        getline(inFile, cipherInput);

        encrypt.setPlainText(plainInput);
        encrypt.setCipherText(cipherInput);
    }
    else
    {
        encrypt.setPlainText("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        encrypt.setCipherText("ZYXWVUTSRQPONMLKJIHGFEDCBA");
    }

    inFile.close();

    cout << "Key: " << plainInput << endl;
    cout << "Cipher: " << encrypt.getCipher() << endl;

    cout << "? ";
    cin.ignore();
    getline(cin, message);
    cout << endl;

    if (direction == "encrypt")
    {
        cout << encrypt.encryptCipher(message) << endl;
    }
    else if (direction == "decrypt")
    {
        cout << encrypt.decryptCipher(message) << endl;
    }
    else
    {
        cout << "Invalid direction.";
    }
}