#include <iostream>

using namespace std;

class Printer
{
private:
    string _name;
    int _paper;
public:
    Printer(string Name, int Paper)
    {
        _name = Name;
        _paper = Paper;
    }

    void Print(string txt)
    {
        int requirePaper = txt.length()/10;

        if(requirePaper > _paper)
        {
            // throw "No paper";
            throw 404;
        }

        cout << "Printing...\n" << txt << endl;
        _paper -= requirePaper;
    }
};

int main()
{
    Printer myPrinter("Canon", 10);
    try
    {
        myPrinter.Print("Report. I am Robotics Engineer");
        myPrinter.Print("Report. I am Robotics Engineer");
        myPrinter.Print("Report. I am Robotics Engineer");
        myPrinter.Print("Report. I am Robotics Engineer");
        myPrinter.Print("Report. I am Robotics Engineer");
    }
    catch(const char *txtExcpetion)
    {
        cout << "Exception; " << txtExcpetion << endl;
    }
    catch(...)
    {
        cout << "Exception happened!!" << endl;
    }
    return 0;
}