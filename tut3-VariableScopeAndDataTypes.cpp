#include <iostream>
using namespace std;

int global = 8;

void sum()
{
    int local = 9;
    cout << global;
}

int main()
{

    int global = 24;
    // local variable gets predence ober global variable of same name

    cout << global << "\n";
    sum();

    // cout<<local;
    // scope of local variable is within it's function only, whereas scope of a global variable is within whole code

    return 0;
}