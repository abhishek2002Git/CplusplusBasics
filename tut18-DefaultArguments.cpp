#include <iostream>
using namespace std;

float moneyval(int amount, float factor = 1.1)
{
    return amount * factor;
}

int main()
{
    cout<<"Money after 1 year will be: "<<moneyval(100000)<<endl;
    // If factor is not provided then it will use it's default value
    cout<<"Money after 1 year will be: "<<moneyval(100000, 1.2)<<endl;
    // If factor is provided then it's default value will get overwrite
    return 0;
}
