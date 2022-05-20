// WAP to find the factorial of a number.
#include <iostream>
using namespace std;

int fact = 1;
int main()
{
    int n;
    cout << "Enter the number.";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is: " << fact;
    return 0;
}