// WAP to show example of switch case.
#include <iostream>
using namespace std;
int n;
int main()
{
    cout << "Enter your choice.";
    cin >> n;

    switch (n)
    {
    case 0:
        cout << "OS";
        break;
    case 1:
        cout << "DBMS";
        break;
    case 2:
        cout << "OOPS";
        break;
    case 3:
        cout << "DS";
        break;
    default:
        cout << "Student not registered";
        break;
    }
}