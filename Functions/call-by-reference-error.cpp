#include <iostream>
using namespace std;

int *add(int a, int b);

// int c;  //This is soln of segmentation fault error

int main()
{
    int *p = add(3, 5);
    cout << *p;
}

int *add(int a, int b)
{
    static int c; // This is to hold memory of var c until main executes all.
    c = a + b;
    return &c;
}
