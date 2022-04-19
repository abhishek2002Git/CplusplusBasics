#include <iostream>
using namespace std;

class Point
{
    int a, b;
    friend int distanceBetweenTwoPoints(Point, Point);

public:
    Point(int, int);
};

Point ::Point(int x, int y)
{
    a = x;
    b = y;
}

int distanceBetweenTwoPoints(Point p1, Point p2)
{
    cout << ((p2.a - p1.a) * (p2.a - p1.a)) + ((p2.b - p1.b) * (p2.b - p1.b));
}

int main()
{
    Point a(1, 2);
    Point b(4, 6);
    distanceBetweenTwoPoints(a, b);

    return 0;
}
