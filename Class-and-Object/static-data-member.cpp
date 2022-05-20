// Calling static data member using object
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

    void showct()
    {
        cout << ct;
    }
};

int student::ct;

int main()
{
    student s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s1.showdata();
    s2.showdata();
    s3.showdata();
    s1.showct();
}
