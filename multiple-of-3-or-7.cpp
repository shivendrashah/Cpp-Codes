// WAP to check if a given positive number is multiple of 3 or a multiple of 7.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n % 3 == 0)
    {
        cout << "Multiple of 3";
    }
    else if (n % 7 == 0)
    {
        cout << "Multiple of 7";
    }
    else
    {
        cout << "Not a multiple of 3 or 7";
    }
}