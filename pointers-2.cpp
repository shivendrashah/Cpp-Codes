// WAP to print output of pointers
#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    i = i + 1;
    int *j = &i;

    cout << i << endl;
    cout << j << endl;

    // *j = *j + 1;

    cout << *j << endl;
    cout << *j++ << endl;
    cout << *++j << endl;
    cout << ++*j << endl;
}