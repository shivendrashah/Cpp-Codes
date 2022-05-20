#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int x = 6;

    arr[size] = 6;

    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}