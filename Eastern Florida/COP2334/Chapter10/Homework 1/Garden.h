/*
 * Header file for Garden.cpp, containing Garden class
 *
 * Name:	Thor Kopenkoskey
 * Date:	Apr 19, 2026
 */

#include <iostream>
#include <string>
using namespace std;

class Garden
{
    private:
        static const int MAX_NUM_PLANTS = 5;
        string array[MAX_NUM_PLANTS];

        string name;
        double size;
        int numPlants;

    public: 

        Garden();

        double getSize() const;
        string getName() const;
        int getNumPlants() const;

        void setSize(double s);
        void setName(string n);

        void clearGarden();
        void addPlant(string plantName);

        void printGarden();

};