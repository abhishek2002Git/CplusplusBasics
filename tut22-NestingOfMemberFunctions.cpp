#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // by default "s" is private member

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
    chk_bin(); //here, we are calling a member function inside another member function, this is called Nesting of member functions
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

int main()
{
    binary b;
    b.read();
    return 0;
}
