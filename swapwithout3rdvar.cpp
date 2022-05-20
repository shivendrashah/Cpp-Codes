// WAP to swap two numbers without using third variable
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swaping 1st number is: " << a << endl;
    cout << "After Swaping 2nd number is: " << b;
}