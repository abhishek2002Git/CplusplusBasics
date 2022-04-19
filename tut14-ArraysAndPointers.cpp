#include <iostream>
using namespace std;

void pionterToNumber(int *para)
{ // this functions takes pointer and return it's value to which it is pointing
    cout << "The value of a pointer is " << *para << endl;
}

void swap(int *first, int *second)
{
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int marks[] = {76, 45, 98, 78};

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // You can even change the value of an array;
    marks[2] = 100;
    cout << marks[2] << endl;

    // Pointers and Arrays
    cout << "Pointers and Array:" << endl;
    int *ptr = marks;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << (marks + 3) << endl;
    cout << *(marks + 3) << endl;
    cout << *(++ptr) << endl;

    // Exercise on pointers
    int num = 73;
    int *numptr = &num;
    pionterToNumber(numptr);

    // Swapping two variables
    int val1 = 1, val2 = 2;
    cout << val1 << endl;
    cout << val2 << endl;

    // method 1
    int *ptrval1 = &val1;
    int *ptrval2 = &val2;
    int temp;
    temp = *ptrval1;
    val1 = *ptrval2;
    val2 = temp;
    // this was method 1

    // swap(&val1, &val2); // method 2

    cout << val1 << endl;
    cout << val2 << endl;


    return 0;
}
