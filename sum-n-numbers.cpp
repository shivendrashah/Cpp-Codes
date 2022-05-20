// WAP to enter and display sum of n numbers.
#include <iostream>
using namespace std;

int sum = 0;
int n;
int main()
{
    cout << "Enter the range.";
    cin >> n;

    do
    {
        sum = sum + n;
        n--;
    } while (n >= 0);
    cout << sum;
}