// WAP to show example of if else ladder.
#include <iostream>
using namespace std;

unsigned int age;
int main()
{
    cout << "Enter your age";
    cin >> age;

    if (age < 18)
    {
        cout << "Minor not eligible";
    }
    else if (age >= 18 && age < 60)
    {
        cout << "Eligible for vaccination with least priority";
    }
    else
    {
        cout << "Eligible for vaccination with highest priority";
    }
}