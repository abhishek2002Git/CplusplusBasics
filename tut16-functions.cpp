#include <iostream>
using namespace std;

int sum( int , int);
void greet();

int main()
{
    cout<<sum(3, 4)<<endl;
    greet();
    return 0;
    // This is called Function prototype.
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void greet (){
    cout<<"Hello, how are you?"<<endl;
}