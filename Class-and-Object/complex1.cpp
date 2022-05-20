// Making Array of Objects
#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float img;

public:
    void getdata(float, float);
    void showdata();
    void sum(complex, complex);
    complex sum1(complex, complex);
};

void complex::getdata(float r, float i)
{
    real = r;
    img = i;
}

void complex::showdata()
{
    cout << real << "+" << img << endl;
}

void complex::sum(complex c1, complex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

complex complex::sum1(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

main()
{
    complex c1, c2;
    c1.getdata(2.5, 1.5);
    c2.getdata(1.5, 3);
    c1.sum(c1, c2);
    c1.showdata();
    complex v = c1.sum1(c1, c2);
    // cout << v << endl;
}