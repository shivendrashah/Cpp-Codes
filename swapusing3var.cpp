// WAP to swap two numbers using third variable
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    int c = a;
    a = b;
    b = c;
    cout << "After Swaping 1st number is: " << a << endl;
    cout << "After Swaping 2nd number is: " << b;
}