#include <iostream>
using namespace std;

int add(int *, int *);
int subtract(int *, int *);
float multiply(float *, float *);
int divide(int *, int *);

int main()
{
    int x, y;
    float l, m;
    cout << "Enter values for add, sub, divide: " << endl;
    cin >> x >> y;
    cout << "Enter values for multiply: " << endl;
    cin >> l >> m;
    cout << "Add:      " << add(&x, &y) << endl;
    cout << "Subtract: " << subtract(&x, &y) << endl;
    cout << "Divide: " << divide(&x, &y) << endl;
    cout << "Multiply: " << multiply(&l, &m) << endl;
}

int add(int *a, int *b)
{
    return *a + *b;
}

int subtract(int *a, int *b)
{
    return *a - *b;
}

float multiply(float *a, float *b)
{
    return *a * *b;
}

int divide(int *a, int *b)
{
    return *a / *b;
}
