// WAP to insert an element at the begining of array
#include <iostream>
using namespace std;

int main()
{
    int value, ub;
    int n = 6;
    int arr[n] = {4, 5, 6, 7, 8, 9};

    cout << "Enter the value to insert \n";
    cin >> value;

    ub = n;
    ub = ub + 1;
    for (int i = ub; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = value;

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}