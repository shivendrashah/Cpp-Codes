// Create a class distance to convert feet into inches
#include <iostream>
using namespace std;

class distanc
{
private:
    float new_feet;
    float feets;
    float inches;

public:
    void getdata(float feets, float inches)
    {
        cout << "Enter height in feet and inches: " << endl;
        cin >> feets;
        // cin >> inches;
    }

    void showdata()
    {
        cout << "Feet into inches is: " << endl;
        cout << new_feet << endl;
    }

    void conversion()
    {

        new_feet = feets * 12;
    }
};

int main()
{
    distanc s1;
    s1.getdata(4, 5);
    s1.showdata();
}
