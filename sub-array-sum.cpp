#include <iostream>
using namespace std;

int main()
{
    int size, s;
    int sumArray = 0;

    cout << "Enter the size of array: \n";
    cin >> size;
    cout << "Enter the sum: ";
    cin >> s;
    int arr[size];

    cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int p = 0;
    for (int i = p; i < size; i++)
    {
        sumArray += arr[i];
        if (sumArray > s)
        {
            sumArray = 0;
            p = p + 1;
            break;
        }
        else if (sumArray == s)
        {
            cout << size - i;
        }
    }

    return 0;
}