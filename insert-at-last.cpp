// WAP to insert an element at last of array
#include <iostream>
using namespace std;

int main()
{
    int value;
    int size = 6;
    int arr[size] = {4, 5, 6, 7, 8, 9};

    cout << "Enter the value to insert \n";
    cin >> value;

    // cout << "Enter the postion where to insert \n";
    // cin >> pos;

    arr[size] = value;

    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}