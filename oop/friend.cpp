#include <iostream>

using namespace std;

class EquilateralTriangle
{
private:
    float a;
    float circumference;
    float area;
public:
    void setA(float length)
    {
        a = length;
        circumference = a*3;
        area = (1.73*a*a)/4;
    }

    //friend void PrintInfo(EquilateralTriangle);
    friend class Homework;
};

class Homework
{
public:
    void PrintInfo(EquilateralTriangle et)
    {
        cout << et.circumference << endl;
        cout << et.area << endl;
    }
};

int main()
{
    EquilateralTriangle et;
    Homework hk;
    et.setA(3);
    hk.PrintInfo(et);
    return 0;
}