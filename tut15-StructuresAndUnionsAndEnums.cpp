#include <iostream>
using namespace std;

// Structure is used to create user defined data types

struct employee
{
    int salary;
    char favchar;
    float id;
}; // it uses total 9 bit of memory

// Union is like structure but it provides better memory management
typedef union currency 
{
    int dollar;
    int pound;
    int euro;
    int inr;
} crcy;  // it uses total 4 bit of memory


int main()
{
    struct employee sushil;
    sushil.salary = 200000;
    sushil.favchar = 's';
    sushil.id = 12894;
    cout<<sushil.salary<<endl;

    crcy cr1;
    cr1.dollar = 75;
    cr1.pound = 98;
    cr1.euro = 80;
    cout<<cr1.dollar<<endl;
    cout<<cr1.pound<<endl;
    cout<<cr1.euro<<endl;
    // Therfor, in Union you can use only one element of it at a time
    return 0;
}
