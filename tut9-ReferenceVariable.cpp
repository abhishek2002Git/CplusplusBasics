#include <iostream>
using namespace std;


int main()
{
    float x = 455;  
    float & y = x; // here y is refering to x, it doesn't mean y is a variable, it means the original variable x has now two names x and y. Therefore, y is reference variable
    cout<<x<<endl;
    cout<<y<<endl;


    return 0;
}