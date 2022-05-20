// WAP to demonstrate while loop.
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i++ <= 10)
    {
        if (i == 4)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
        // i++;
    }
}
