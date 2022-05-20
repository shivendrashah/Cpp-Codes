// Example of Operator Overloading
#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << x << " " << y << endl;
    }

    friend void operator++(point &obj)
    {
        ++obj.x;
        ++obj.y;
    }
};

int main()
{
    point obj(3, 5);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}