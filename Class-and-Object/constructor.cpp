//  Example of constructor in cpp
#include <iostream>
using namespace std;

class tryy
{
    int n;

public:
    // default constructor
    tryy()
    {
        n = 10;
    }

    // parameterized constructor
    tryy(int x)
    {
        n = x;
    }

    void showdata()
    {
        cout << n << endl;
    }
};

int main()
{
    tryy t1;    // default contructor is called
    tryy t(40); // parameterized constructor is called
    t1.showdata();
    t.showdata();
}