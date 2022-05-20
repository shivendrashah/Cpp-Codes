// WAP to find the sum of digits of a given number.
#include <iostream>
using namespace std;

int sum = 0;
int n, r;
int main()
{
    cout << "Enter the number.";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "Sum of digits is: " << sum;
}