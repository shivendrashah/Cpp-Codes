// Example of Copy Constructor
#include <iostream>
using namespace std;

class test()
{
    int m, n;

public:
    test()
    {
        m = n = 0;
    }

    test(int x)
    {
        m = n = x;
    }

    test(test & t)
    {
        m = t.m;
        n = t.n;
    }

    void showdata()
    {
        cout << m << " " << n << endl;
    }
};

int main()
{
    test t1;
    test t2(10);
    test t3(t2);
    t2.showdata();
}