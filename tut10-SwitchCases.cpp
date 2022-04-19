#include <iostream>
using namespace std;

int main()
{
    int age = 120;
    switch (age)
    {
    case 12:
        cout << "Your age is 12" << endl;
        break;
    case 34:
        cout << "Your age is 34" << endl;
        break;
    case 120:
        cout << "Your age is 120" << endl;
        break;
    case 56:
        cout << "Your age is 56" << endl;
        break;

    default:
        cout << "Your age is default" << endl;
        break;
    }
    return 0;
}
