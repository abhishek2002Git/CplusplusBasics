#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    // since there is two greet() available to execute for Derived class, compiler gets confused and throw error
    // Above live resolves this Ambiguity
public:
    void greet()
    {
        Base1::greet(); // Derived class will use greet() from Base1 class
    }
};

int main()
{
    Derived d1;
    d1.greet();
    return 0;
}
