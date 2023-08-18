#include <iostream>

using namespace std;

class User
{
public:
    string FirstName;
    string LastName;
    int Age;
    string Email;

    User(string fn, string ln, int age)
    {
        FirstName = fn;
        LastName = ln;
        Age = age;
        Email = "khoaantoine07@gmai.com";
    }
};

ostream &operator<<(ostream &COUT, User &usr)
{
    COUT << usr.FirstName << endl;
    COUT << usr.LastName << endl;
    COUT << usr.Age << endl;
    COUT << usr.Email << endl;
    return COUT;
}

int main()
{
    User user1("Khoa", "Le", 18);
    cout << user1;
    return 0;
}