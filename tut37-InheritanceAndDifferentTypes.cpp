#include <iostream>
using namespace std;

// this is base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // we need to create default constructor because derived class automatically calls base class's constructor
};

// private visibility mode = public members of base class become private members of derived class
// public visibility mode = public members of base class become public members of derived class
// Default visibility mode is private
// private members of base class do not inherit in any case

// this is derived class
class programmer : private Employee
{
public:
    int languageCode = 9;
    programmer(int inpId)
    {
        id = inpId;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(134), rohan(55);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    
    programmer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}
