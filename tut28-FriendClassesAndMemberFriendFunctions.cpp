#include <iostream>
using namespace std;

class complex; // this is forward declaration , it guarentees that class complex is defined further so we can use it

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
};

class complex
{
    int a, b;
    // declaring individual functions of calculator as friend
    // friend int calculator ::sumRealComplex(complex , complex );
    // friend int calculator ::sumImaginaryComplex(complex , complex );

    // Alternate way: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumImaginaryComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int res1 = calc.sumImaginaryComplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << res1 << endl;
    return 0;
}
