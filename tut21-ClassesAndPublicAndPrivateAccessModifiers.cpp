#include <iostream>
using namespace std;

class employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // only declared, defined further
        void getData(){  // declared and defined here only
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee :: setData(int a1, int b1, int c1){ // defining a function which was declared in class "employee"
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
    harry.d = 34;
    harry.e = 89;
    // harry.a = 90; // you cannot access the private variables of a class directly
    harry.setData(1, 2, 4); // setData() can access the private members because it is a function which is defined inside that same class
    harry.getData();
    return 0;
}
