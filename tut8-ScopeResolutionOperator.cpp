#include <iostream>
using namespace std;

int c = 45;

int main()
{
    int c = 54;
    cout << c << endl;
    cout << ::c << endl; // this is how you can use global variable, if local variable of same name is present. "::" is called scope resolution operator
    return 0;
}
