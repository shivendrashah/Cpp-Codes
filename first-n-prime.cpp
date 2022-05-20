// WAP to print first n prime numbers.
#include <iostream>
using namespace std;

int n;
int main()
{
    cout << "Enter the range.";
    cin >> n;

    if (n == 1)
    {
        /* code */
    }

    for (int i = 1; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "prime";
        }
    }
}