// to check the largest number among three given integers.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;
    cout << "Enter 3rd number: ";
    cin >> n3;

    if (n1 > n2 && n2 > n3)
    {
        cout << n1 << " is largest.";
    }
    else if (n2 > n1 && n1 > n3)
    {
        cout << n2 << " is largest.";
    }
    else
    {
        cout << n3 << " is largest.";
    }
}