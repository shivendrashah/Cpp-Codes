// WAP to print output of pointers
#include <iostream>
using namespace std;

int main()
{
    int i = 3, *j, **k;
    j = &i;
    k = &j;

    cout << &i << endl;
    cout << j << endl;
    cout << *k << endl;
    cout << *j << endl;
    cout << k << endl;
    cout << &k << endl;
    cout << *(&i) << endl;
    cout << &j << endl;
    cout << **k << endl;
}