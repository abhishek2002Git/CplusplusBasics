#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumComplex(complex o1, complex o2); // declaring sumComplex() as a friend function, now it haves the access of private members of "complex" class, it is not a part of complex it just have the access of it's members.
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;

    c1.setData(1, 4);
    c1.display();

    c2.setData(2, 3);
    c2.display();

    sum = sumComplex(c1, c2);
    sum.display();
    return 0;
}
