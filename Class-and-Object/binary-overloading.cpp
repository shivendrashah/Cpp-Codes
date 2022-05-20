#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}
    void input()
    {
        cout << "Enter real and imaginary parts respectively : ";
        cin >> real;
        cin >> imag;
    }
    // Overload the + operator
    friend Complex operator+(const Complex &obj1, const Complex &obj2)
    {
        Complex temp;
        temp.real = obj1.real + obj2.real;
        temp.imag = obj1.imag + obj2.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex complex1, complex2, result;
    cout << "Enter first complex number:\n";
    complex1.input();
    cout << "Enter second complex number:\n";
    complex2.input();
    // complex1 calls the operator function
    // complex2 is passed as an argument to the function
    result = complex1 + complex2; // complex1 . +(complex2)
    result.output();
    return 0;
}
