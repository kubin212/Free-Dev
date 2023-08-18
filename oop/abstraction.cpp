#include<iostream>

using namespace std;

class Smartphone
{
public:
    virtual void Selfie() = 0;
    virtual void Call() = 0;
};

class Android : public Smartphone
{
public:
    void Selfie()
    {
        cout << "Android takes selfie" << endl;
    }
    void Call()
    {
        cout << "Android calling" << endl;
    }
};

class Iphone : public Smartphone
{
public:
    void Selfie()
    {
        cout << "Iphone takes selfie" << endl;
    }
    void Call()
    {
        cout << "Iphone calling" << endl;
    }
};

int main()
{
    Smartphone *s1 = new Android();
    s1->Selfie();
    return 0;
}