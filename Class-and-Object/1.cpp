// Example of Class
#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    int age;

public:
    void disp();

    void getdata()
    {
        cin >> rollno >> age;
    }
    void showdata()
    {
        cout << rollno << age << endl;
    }
};

inline void student::disp()
{
    cout << "Morning" << endl;
}

int main()
{

    student s1;
    s1.getdata();
    student s2;
    s2.getdata();
    s1.disp();
    s1.showdata();
    s2.showdata();
}
