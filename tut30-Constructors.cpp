#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    // Constructor is a special member fucniton with same name as of the class.
    // It is used to initialize the objects of its class
    // it is automatically invoked when object is created
    // It has to be created in public section.
    Complex(void); // constructor declaration

    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

Complex :: Complex(void){  // this is a default constructor, as it takes no parameter
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.display();   
    return 0;
}
