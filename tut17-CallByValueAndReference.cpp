#include <iostream>
using namespace  std;

void swap1( int x, int y){ // call by value = values will not be swap because swap1 takes copy of actual parameters not them and manipulate it.
    int temp = x;
    x = y;
    y = temp;
}

void swap2( int* x, int* y){ // call by reference = value will be swapped because using address you can manipulate the original variable
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3( int &x, int &y){ // call by refernece variable, reference variables can manipulate original variables
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 2, b = 3;
    cout<<a<<" "<<b<<endl;
    swap3(a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

