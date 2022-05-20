//  Example of constructor in cpp
#include <iostream>
using namespace std;

class test
{
    int n, m;

public:
    // default constructor
    test();
    test(int);
    test(int, int);

    // test(int p, int q = -1)
    // {
    //     n = p;
    //     m = q;
    // }

    void showdata()
    {
        cout << n << " " << m << endl;
    }

    // Destructor is defined
    ~test()
    {
        cout << "Destructor is called" << endl;
        cout << n << " " << m << endl;
    }
};

test::test()
{
    n = 0;
    m = 0;
}

test::test(int r)
{
    n = r;
    m = r;
}

test::test(int x, int y)
{
    n = x;
    m = y;
}

int main()
{
    test t;
    test t1(10);
    test t2(20, 30);
    t.showdata();
    t1.showdata();
    t2.showdata();
}