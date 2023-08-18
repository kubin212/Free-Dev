#include <iostream>
#include <list>

using namespace std;

class YouTube
{
private:
    string Name;
    int Subscribers;
    list<string> PublishVideos;
protected:
    string Owner;
    int Quality;
public:
    YouTube(string name, string owner)
    {
        Name = name;
        Owner = owner;
        Subscribers = 0;
        Quality=0;
    }
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner: " << Owner << endl;
        cout << "Number of Scbr: " << Subscribers << endl;
        cout << "Video: " << endl;
        for(auto x : PublishVideos)
        {
            cout << x << endl;
        }
    }
    void Sub()
    {
        Subscribers++;
    }
    void Unsub()
    {
        (Subscribers>0) ? Subscribers-- : Subscribers=0;
    }
    void PubVid(string title)
    {
        PublishVideos.push_back(title);
    }
    void Check()
    {
        if(Quality<5)
        {
            cout << Name << " Bad quality " << endl;
        }
        else
        {
            cout << Name << " Good quality " << endl;
        }
    }
};

class SoccerYtb : public YouTube
{
public:    
    SoccerYtb(string name, string owner) : YouTube(name, owner){}
    void Practice()
    {
        cout << Owner << " Lest's training soccer " << endl;
        Quality++;
    }
};

class TennisYtb : public YouTube
{
public:    
    TennisYtb(string name, string owner) : YouTube(name, owner){}
    void Practice()
    {
        cout << Owner << " Lest's training tennis " << endl;
        Quality++;
    }
};

void DefineClass();

int main()
{
    //Channel 1
    //YouTube ch1("kubin", "khoa");
    /* ch1.Sub();
    ch1.Unsub();
    ch1.PubVid("Vid1");
    ch1.GetInfo(); */

    SoccerYtb ch2("World Cup", "FIFA");
    ch2.PubVid("Final");
    ch2.GetInfo();
    ch2.Practice();

    TennisYtb ch3("Wimbledon", "ATP");
    for(int i=0;i<6;i++)
    {
        ch3.Practice();
    }

    YouTube *yt1 = &ch2;
    YouTube *yt2 = &ch3;

    yt1->Check();
    yt2->Check();

    return 0;
}

void DefineClass()
{
    
}
