#include <iostream>
using namespace std;

// int add(int a, int b)
// {
//     return a + b;
// }

int add(int, int);

int main()
{
    int x, y;
    cin >> x >> y;
    // cout << add(x, y);

    int x1 = add(x, y);
    cout << x1 << endl;

    cout << "end";
}

int add(int a, int b)
{
    return a + b;
}
