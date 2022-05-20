// Count numbers of positive and negative number in an array
#include <iostream>
using namespace std;

int main()
{
    int size;

    int pcount = 0, ncount = 0;

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
        if (arr[i] >= 0)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }

    cout << "Positive count: " << pcount << " Negative count: " << ncount;

    return 0;
}