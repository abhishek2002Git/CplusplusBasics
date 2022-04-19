#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    // Since there are multiple constructors, so it will choose the correct constructor according to number of parameters

    Complex c1(4,6);
    c1.display();

    Complex c2(5);
    c2.display();
    return 0;
}
