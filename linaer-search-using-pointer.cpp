// WAP to linear search an element in an array using pointer.
#include <iostream>
using namespace std;

int main()
{
    int size, x;

    cout << "Enter the size of array: \n";
    cin >> size;
    int arr[size];
    int *p;
    p = arr;

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> *p;
        p++;
    }
    p = arr;

    cout << "Enter the element to search: ";
    cin >> x;

    for (int i = 0; i < size; i++)
    {
        if (*p == x)
        {
            cout << "Element found at index: " << i;

            break;
        }
        p++;
    }

    return 0;
}