#include <iostream>
#include <list>

using namespace std;

//Based class
class Instrument
{
public:
    virtual void MakeSound() = 0;
    // {
    //     cout << "Instrument is playing" << endl;
    // }
};

//Derived class
class Accordion : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordion is playing" << endl;
    }
};

class Piano : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Piano is playing" << endl;
    }
};

int main()
{
    Instrument *i1 = new Accordion();
    //i1->MakeSound();
    Instrument *i2 = new Piano();
    //i1->MakeSound();

    Instrument *instruments[2] = {i1, i2};
    for(int i=0;i<2;i++)
    {
        instruments[i]->MakeSound();
    }
    return 0;
}