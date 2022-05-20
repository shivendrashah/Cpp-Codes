// WAP to calculate the sum of series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <iostream>
using namespace std;

int sum = 0;
int n;
int main()
{
    cout << "Enter the range.";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    cout << "Sum of series is: " << sum;
}