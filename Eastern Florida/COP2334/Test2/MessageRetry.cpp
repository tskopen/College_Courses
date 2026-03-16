/*
 * Program to read and output desired advertisment mesage
 *
 * Name: Thor Kopenkoskey
 * Date: March 11, 2026
 */

#include <iostream>
#include <string>

using namespace std;

void takeMessage(int &messageNum, string &message);
int takeMenuNum(int &menuNum);
void slideingPrint(int &messageNum, string &message);
string phonePrint(int &messageNum, string &message);

const int SENTIAL = 3;
/*
 * main - prompts for words, prints spaced words, then evenly spaced
 *
 * Return: status
 */

int main()
{
	bool shouldcontinute = true;

	int menuNum;
	int messageNum;
	string message;

	takeMenuNum(menuNum);

	while (menuNum != SENTIAL)
	{
		takeMessage(messageNum, message);
		if (menuNum == 1)
		{
			slideingPrint(messageNum, message);
		}
		else if (menuNum == 2)
		{
			phonePrint(messageNum, message);
			cout << message << endl;
		}

		takeMenuNum(menuNum);		

	}

	return 0;
}

/*
 * Ask for menu options and input to a variable
 *
 * Return:	menu option
 */
int takeMenuNum(int &menuNum)
{
	cout << "1 for sliding, 2 for phone, 3 for quit? ";
	cin >> menuNum;
	cout << endl;

	return menuNum;
}

/*
 * Take desired message and process it into variables
 *
 * Return:	menu option
 */
void takeMessage(int &messageNum, string &message)
{

	cout << "Message N? ";
	cin >> message;
	cin >> messageNum;
	cout << endl;

}
/*
 * Take the message and process it into sliding format with __ and repeat its print with increasing _
 *
 * Return:	menu option
 */
void slideingPrint(int &messageNum, string &message)
{
	for (int i = 1; i <= messageNum; i++)
	{
		message.insert(0, 1, '_');
		cout << message << endl;
	}
}
/*
 * Take the message and process it to have a - at desired location and lowercase the last letter.
 *
 * Return:	menu option
 */
string phonePrint(int &messageNum, string &message)
{
	string temp;
	message.insert(messageNum, 1, '-');

	int index = (message.length() - 1);

	char ch = message.at(index);

	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 'a' - 'A';
	}

	temp.append(1, ch);

	message.replace(index, 1, temp);
	return message;
}

