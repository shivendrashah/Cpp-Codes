// Find the largest of 2 D array elements
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int row, col;
    int lar = INT_MIN;

    cout << "Enter the row of array: ";
    cin >> row;

    cout << "Enter the col of array: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter array elements:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < col; l++)
        {
            if (arr[k][l] > lar)
            {
                lar = arr[k][l];
            }
        }
    }

    cout << "Largest array element is: " << lar;
}