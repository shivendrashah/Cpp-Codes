// WAP to print sum of natural numbers where n is entered by user using while loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum;
}