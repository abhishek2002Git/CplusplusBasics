#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display()
    {
        cout << a << " , " << b << endl;
    }
};

int main()
{ // 2,3    4,5   6,8
    complex x, y, z;
    x.setData(2, 3);
    y.setData(4, 5);
    z.setDataBySum(x, y);
    x.display();
    y.display();
    z.display();
    return 0;
}
