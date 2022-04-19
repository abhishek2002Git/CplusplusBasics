#include <iostream>
using namespace std;

// A copy constructor is a member function that initializes an object using another object of the same class.

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj) // this is a copy constructor
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    // if no copy constructor is found, compiler supplies it's own copy constructor

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

    Number z1(z); // z1 is created by invoking copy constructor
    z1.display();

    Number z3 = z; // z3 is created by invoking copy constructor
    z3.display();
    return 0;
}
