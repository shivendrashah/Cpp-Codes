// WAP to search an element in an array using linear search
#include <iostream>
using namespace std;

int main()
{
    int size, x;

    cout << "Enter the size of array: \n";
    cin >> size;
    int arr[size];

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index: " << i;

            break;
        }
    }

    return 0;
}