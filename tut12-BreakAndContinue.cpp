#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i==2)
        {
            continue; // it will skip the present iteration i.e 2 and continue the loop
        }
            cout<<i<<endl;
        
    }
    
    return 0;
}
