// WAP to print sizeof pointers
#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    long long int y = 100;
    char ch = 'A';
    int *px = &x;
    long long *py = &y;
    char *pch = &ch;

    cout << sizeof(x) << endl;
    cout << sizeof(ch) << endl;
    cout << sizeof(y) << endl;
    cout << sizeof(px) << endl;
    cout << sizeof(pch) << endl;
    cout << sizeof(py) << endl;
}