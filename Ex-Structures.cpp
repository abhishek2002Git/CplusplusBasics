#include <iostream>
using namespace std;

struct student
{
    int roll_no;
    float marks;
    int age;
};

int main()
{
    struct student stu[5];

    int roll, mark, ag;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your roll no:" << endl;
        cin >> roll;
        stu[i].roll_no = roll;
        cout << "Enter your marks:" << endl;
        cin >> mark;
        stu[i].marks = mark;
        cout << "Enter your age:" << endl;
        cin >> ag;
        stu[i].age = ag;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Student0" << i + 1 << " details : "
             << "roll no: " << stu[i].roll_no << " Marks: " << stu[i].marks << " Age: " << stu[i].age << endl;
    }

    return 0;
}
