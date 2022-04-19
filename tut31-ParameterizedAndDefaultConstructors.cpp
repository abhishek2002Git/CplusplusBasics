#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // this is parameterized constructor, as it takes parameters
{
    a = x;
    b = y;
}

int main()
{
    Complex a(4, 6);
    a.display();

    Complex b = Complex(9, 11);
    b.display();

    return 0;
}
