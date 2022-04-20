#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll no is " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};

void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::getMarks()
{
    cout << "Marks obtained in maths are " << maths << endl;
    cout << "Marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        getMarks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.setMarks(90.8, 97.7);
    harry.display();
    return 0;
}
