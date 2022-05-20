
#include <iostream>
using namespace std;

class two;
class one
{
    int a;
    int b;

public:
    one(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " " << b << endl;
    }
    friend void averageOf2Num(one, two);
};

class two
{
    int c;
    int d;

public:
    two(int p, int q)
    {
        c = p;
        d = q;
    }

    friend void averageOf2Num(one, two);

    void print()
    {
        cout << c << " " << d << endl;
    }
};

void averageOf2Num(one g, two h)
{
    int avg = g.a + g.b + h.c + h.d;
    cout << avg / 4;
}

int main()
{
    one g(200, 4);
    two h(5, 8);
    g.print();
    h.print();
    averageOf2Num(g, h);
}