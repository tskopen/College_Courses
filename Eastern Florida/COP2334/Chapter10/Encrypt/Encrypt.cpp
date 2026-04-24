/*
 * Implementation file for Encrypt.h
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include "Encrypt.h"

/*
 * Constructor of class, set default values
 *
 * Return:		N/A
 */
Encrypt::Encrypt()
{
    cipher = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

/*
 * function to set plainText input
 *
 * Parameter: 	string input	desired plainText
 * Return:	 VOID
 */
void Encrypt::setPlainText(string input)
{
    plainText = input;
}

/*
 * function to set size data
 *
 * Parameter: 	string input	desired CipherText
 * Return:	 VOID
 */
void Encrypt::setCipherText(string input)
{
    cipher = input;
}

/*
 * function to get cipher string
 *
 * Return:	 cipherValue
 */
string Encrypt::getCipher()
{
    return cipher;
}

/*
 * function to search plainText, and replace with chipher text, if position matched.
 *
 * Parameter: 	string input	desired input
 * Return:	 result     encrypted string
 */
string Encrypt::encryptCipher(string input)
{
    string result = "";

    for (int i = 0; i < input.length(); i++)
    {
        int pos = seqSearchStr(plainText, plainText.length(), input[i]);

        if (pos != -1)
        {
            result += cipher[pos];
        }
        else
        {
            result += input[i];
        }
    }
    return result;
}

/*
 * function to search plainText, and replace with chipher text, if position matched.
 *
 * Parameter: 	string input	desired input
 * Return:	 result     decrypted string
 */
string Encrypt::decryptCipher(string input)
{
    string result = "";

    for (int i = 0; i < input.length(); i++)
    {
        int pos = seqSearchStr(cipher, cipher.length(), input[i]);

        if (pos != -1)
        {
            result += plainText[pos];
        }
        else
        {
            result += input[i];
        }
    } 

    return result;
}

/*
 * function to search array
 *
 * Parameter: 	const string &list	    desired input
 * Parameter: 	int listLength	        length to search
 * Parameter: 	char searchItem	        desired item to find
 * Return:	 location of item
 */
int Encrypt::seqSearchStr(const string &list, int listLength, char searchItem)
{
    int loc = 0;
    bool found = false;

    while (loc < listLength && !found)
    {
        if (list[loc] == searchItem)
        {
            found = true;
        }
        else
        {
            loc++;
        }
    }

    if (found)
    {
        return loc;
    }
    else
    {    
        return -1;
    }
}