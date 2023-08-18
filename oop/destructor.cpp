#include <iostream>

using namespace std;

class Book
{
public:
    string Title;
    string Auth;
    int *Rates;
    int RatesCounter;

    Book(string title, string author)
    {
        Title = title;
        Auth = author;
        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;
    }
    ~Book()
    {
        delete [] Rates;
        Rates = nullptr;
        cout << "Destructor invoked" << endl;
    }
    Book (const Book &original)
    {
        Title = original.Title;
        Auth = original.Auth;
        RatesCounter = original.RatesCounter;

        Rates = new int [RatesCounter];
        for(int i=0;i<RatesCounter;i++)
        {
            Rates[i] = original.Rates[i];
        }
    }
};



int main()
{
    Book book1("Soccer", "Zidane");
    return 0;
}