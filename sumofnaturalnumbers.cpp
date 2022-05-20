// WAP to print sum of natural numbers where n is entered by user using for loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {

        sum = sum + i;
    }
    cout << sum;
}