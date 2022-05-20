#include <iostream>
using namespace std;

void swap1(int &a, int &b);

int main()
{
    int x, y;
    cin >> x >> y;
    swap1(x, y);
    cout << x << " " << y;
}

void swap1(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
