#include <iostream>
using namespace std;

int main()
{
    int size;
    int sumArray = 0;

    cout << "Enter the size of array: \n";
    cin >> size;
    int arr[size];

    cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        sumArray += arr[i];
    }

    cout << "Sum of array elements: " << sumArray;

    return 0;
}