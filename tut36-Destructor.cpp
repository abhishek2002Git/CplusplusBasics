#include <iostream>
using namespace std;

// Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

int count = 0;

class num{
    public:
    // static int count;
    num(){
        count++;   // avoid these errors
        cout<<"This is the tiime when constructor is called for object number"<<count<<endl;
    }

    ~num(){
        cout<<"This is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are inside our main funciton"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;

    return 0;
}
