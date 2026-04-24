#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct movieInfo
{
    string movieName = "EMPTY";

    int day = 0;
    int month = 0;

    double price = 10;

};

int getNumMovies();
movieInfo readMovie(const movieInfo& movie);
double calcMantineePrice();
void printMovie(const movieInfo &movie);

int main()
{
    int numMovies = getNumMovies();

    vector<movieInfo> movie;

    for (int i = 0; i < numMovies; i++)
    {
        movie[i] = readMovie(movie[i]);
    }

    calcMantineePrice();

    for (int i = 0; i < numMovies; i++)
    {
        printMovie(movie[i]);
    }

    return 0;
}

movieInfo readMovie(const movieInfo& movie)
{
    string movieName;
    int day;
    int month;
    double price;

    cout << "Movie Month/Day Price? ";
    cin >> movieName >> day;
    cin.ignore();
    cin >> month >> price;

    return { movieName, day, month, price };

}
double calcMantineePrice()
{
    return 0;

}

void printMovie(const movieInfo &movie)
{
    cout << movie.movieName << " " << setw(2) << setfill('0') << movie.day << "/" << setw(2) << setfill('0') << movie.month << " " << movie.price << endl;
}

int getNumMovies()
{
    int num;

    // A do-while loop that keeps going while num is invalid
    do
    {
        try
        {
            cout << "Num? ";
            cin >> num;
            cout << endl;

            if (!num)
            {
                throw num;
            }
        }

        catch (int)
        {
            string garbage;
            cout << "ERROR: " << num << endl;
            cin.clear();
            getline(cin, garbage);
            num = -1;
        }


    } while (num < 0);

    return num;
}