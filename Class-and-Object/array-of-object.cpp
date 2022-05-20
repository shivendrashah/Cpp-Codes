// Making Array of Objects
#include <iostream>
using namespace std;

class student
{
private:
    int age;
    char name[50];
    static int ct;

public:
    void getdata()
    {
        cin >> age >> name;
        ct++;
    }

    void showdata()
    {
        cout << age << name << endl;
    }

    static void showct()
    {
        cout << ct;
    }
};

int student::ct;

int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].showdata();
    }

    student::showct();
}
