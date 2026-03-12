/*
 * Header document for Puzzle.cpp's puzzle class calls
 *
 * Name:    Thor Kopenkoskey
 * Date:   April 18, 2025
 */
 
#include <string>
using namespace std;

class Puzzle
{
    private:
        string descript;
        int pieceNum;
        double length;
        double width;
    
    public:
        string getDescript();
        void setDescript(string descript);
        
        int getPieceNum();
        void setPieceNum(int pieceNum);
        
        double getLength();
        void setLength(double length);
        
        double getWidth();
        void setWidth(double width);
        
        void print();
};

/*
 * getDescript - Retrieves the puzzle description
 *
 * Return: The current description of the puzzle
 */
 
string Puzzle::getDescript()
{
    return descript;
}

/*
 * setDescript - set the puzzle description
 *
 * Parameter:  newDescript - the new description to set
 * Return:     nothing
 */
 
void Puzzle::setDescript(string newDescript)
{
    descript = newDescript;
}

/*
 * getPieceNum - get the number of puzzle pieces
 *
 * Return:     the current number of pieces
 */
 
int Puzzle::getPieceNum()
{
    return pieceNum;
}

/*
 * setPieceNum - set the number of puzzle pieces
 *
 * Parameter:  newPieceNum - the new number of pieces to set
 * Return:     nothing
 */
 
void Puzzle::setPieceNum(int newPieceNum)
{
    pieceNum = newPieceNum;
}

/*
 * getLength - get the length of the puzzle
 *
 * Return:     the current length of the puzzle
 */
 
double Puzzle::getLength()
{
    return length;
}

/*
 * setLength - set the length of the puzzle
 *
 * Parameter:  newLength - the new length to set
 * Return:     nothing
 */
 
void Puzzle::setLength(double newLength)
{
    length = newLength;
}

/*
 * getWidth - get the width of the puzzle
 *
 * Return:     the current width of the puzzle
 */
 
double Puzzle::getWidth()
{
    return width;
}

/*
 * setWidth - set the width of the puzzle
 *
 * Parameter:  newWidth - the new width to set
 * Return:     nothing
 */
 
void Puzzle::setWidth(double newWidth)
{
    width = newWidth;
}

/*
 * print - print puzzle details to the screen
 *
 * Return:     nothing
 */
 
void Puzzle::print()
{
    cout << "Description: " << descript << endl;
    cout << "Pieces: " << pieceNum << endl;
    cout << "Dimensions: " << length << " by " << width << endl;
}