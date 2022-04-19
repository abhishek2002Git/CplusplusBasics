#include <iostream>
using namespace std;

// Function overloading = If there are multiple functions with same name, then according to parameters passed, correct function will be called.

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(2, 3) << endl;
    cout << sum(2, 3, 5) << endl;
    return 0;
}
