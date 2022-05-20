int &val(int &x)
{
    cout << x;
    cout << &x;
    return x;
}

int main()
{
    int a = 20;
    int &b = val(a);
    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    val(a) = 13;
    cout << a << endl;
    cout << &a << endl;
}