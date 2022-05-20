#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;

    for (j = n - 1; j > 0; j--)
    {
        cout << " ";
        for (k = 1; k < (2 * n); k++)
        {
            cout << k;
        }
    }
    cout << endl;
}