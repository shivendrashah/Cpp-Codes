// WAP to display ASCII code of the character entered by the user till the time user enters char 'X' or 'x'
// Using while loop
#include <iostream>
using namespace std;

int main()
{
    char ch;
    while (true)
    {
        cout << "Enter the character: ";
        cin >> ch;
        if (ch == 'X' || ch == 'x')
        {
            break;
        }
        else
        {
            cout << "The ASCII value of " << ch << " is: " << int(ch) << endl;
        }
    }
}