#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int* b = &a;  // 'b' is a pointer which is pointing to 'a', 'a' is stored in ram(memory) and 'b' is storing the address means the location in memory where 'a' is stored
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<*b<<endl;
    return 0;
}
