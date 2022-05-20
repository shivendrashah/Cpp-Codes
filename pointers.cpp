// WAP to print output of pointers
#include <iostream>
using namespace std;

int main()
{
    int x = 4, *px = &x;
    long long int y = 100, *py = &y;
    char ch = 'A', *pch = &ch;
    // int *px = &x;
    // long long *py = &y;
    // char *pch = &ch;

    cout << x << endl;
    cout << &x << endl;
    cout << px << endl;
    cout << *px << endl;
    cout << *&x << endl;
    cout << *&px << endl;
    cout << &(*px) << endl;
    cout << &*px << endl;
}