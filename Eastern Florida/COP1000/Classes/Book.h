#include <string>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        int datePub;
    
    public:
        string getTitle();
        void setTitle(string newTitle);
        
        string getAuthor();
        void setAuthor(string newAuthor);
        
        int getDatePub();
        void setDatePub(int newDatePub);
        
};

string Book::getTitle()
{
    return title;
}
void Book::setTitle(string newTitle)
{
    title = newTitle;
}

string Book::getAuthor()
{
    return author;
}
void Book::setAuthor(string newAuthor)
{
    author = newAuthor;
}


int Book::getDatePub()
{
    return datePub;
}
void Book::setDatePub(int newDatePub)
{
    datePub = newDatePub;
}
