#include <iostream>
using namespace std;

class Base1
{
    int a, b;

protected:
    void setNumberForSum(int x, int y)
    {
        a = x;
        b = y;
    }

public:
    void sumResult()
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

class Base2
{
    int a, b;

protected:
    void setNumberForMultiply(int x, int y)
    {
        a = x;
        b = y;
    }

public:
    void multiplyResult()
    {
        cout << "Multiplication of " << a << "and " << b << "is " << a * b << endl;
    }
};

class Derived : protected Base1, protected Base2
{
public:
    void finalDisplay()
    {
        setNumberForSum(3, 4);
        sumResult();
        setNumberForMultiply(5, 6);
        multiplyResult();
    }
};

int main()
{
    Derived d1;
    d1.finalDisplay();
    return 0;
}
