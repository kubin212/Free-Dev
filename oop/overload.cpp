#include <iostream>
#include <string>
#include <list>

using namespace std;

struct YtbChannel
{
    string Name;
    int SubCount;

    YtbChannel(string name, int sub)
    {
        Name = name;
        SubCount= sub;
    }

    bool operator==(const YtbChannel &channel) const
    {
        return this->Name == channel.Name;
    }
};
struct Collection
{
    list<YtbChannel> myChannel;

    void operator+=(YtbChannel &channel)
    {
        this->myChannel.push_back(channel);
    }

    void operator-=(YtbChannel &channel)
    {
        this->myChannel.remove(channel);
    }
};

ostream &operator << (ostream &COUT, YtbChannel &ytchannel)
{
    COUT << ytchannel.Name << endl;
    COUT << ytchannel.SubCount << endl;
    return COUT;
}
ostream &operator << (ostream &COUT, Collection &collect)
{
    for(YtbChannel ytb:collect.myChannel)
    {
        COUT << ytb << endl;
    }
    return COUT;
}

int main()
{
    YtbChannel yt1 = YtbChannel("Khoa", 100);
    YtbChannel yt2 = YtbChannel("Le", 200);
    Collection cl1;
    cl1 += yt1;
    cl1 += yt2;
    cl1 -= yt2;
    //cout << yt1 << yt2;
    cout << cl1;
    return 0;
}