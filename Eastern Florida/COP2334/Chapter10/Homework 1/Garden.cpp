/*
 * Implementation file for Garden.h
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include "Garden.h"
/*
 * Constructor of class, set default values
 *
 * Return:		N/A
 */
Garden::Garden()
{
    name = "Joe";
    size = 0;
    numPlants = 0;
}

/*
 * function to return size data
 *
 * Return:		size - size of garden
 */
double Garden::getSize() const
{
    return size;
}

/*
 * function to return numPlants
 *
 * Return:		numPlants - numPlants in garden
 */
int Garden::getNumPlants() const
{
    return numPlants;
}

/*
 * function to return name data
 *
 * Return:		name - name of the garden owner
 */
string Garden::getName() const
{
    return name;
}

/*
 * function to set size data
 *
 * Parameter: 	double s	desired size
 * Return:	 VOID
 */
void Garden::setSize(double s)
{
    size = s;
}

/*
 * function to set size data
 *
 * Parameter: 	string n	desired name
 * Return:	 VOID
 */
void Garden::setName(string n)
{
    name = n;
}

/*
 * function to clear garden of its data
 *
 * Return:	 VOID
 */
void Garden::clearGarden()
{
    for (int i = 0; i < numPlants; i++)
    {
        array[i] = "";
    }

    numPlants = 0;
}

/*
 * function to print garden data
 *
 * Return:		VOID
 */
void Garden::printGarden()
{

    cout << "Name: " << name << endl;
    cout << "Size: " << size << " sq yds" << endl;
    cout << "Num Plants: " << numPlants << endl;
    if (numPlants > 0)
    {
        for (int i = 0; i < numPlants; i++)
        {
            cout << "   " << array[i] << endl;
        }
    }
}

/*
 * function to add plant to garden index
 *
 * Parameter: 	string n	desired name
 * Return:		VOID
 */
void Garden::addPlant(string plantName) 
{
    if (numPlants < MAX_NUM_PLANTS) 
    {
        array[numPlants] = plantName;
        numPlants++;
    }
    else 
    {
        cout << "Garden is full, cannot add " << plantName << endl;
    }
}