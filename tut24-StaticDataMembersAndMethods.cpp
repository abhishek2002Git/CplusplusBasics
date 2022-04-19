#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; // all objects share single static variable 
    public:
        void setData(void){
            cout<<"Enter the Id: "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(void){ // this is a static member function
        // cout<<id; // this will throw error, because static function can only access static members and functions.
            cout<<"The value of count is "<<count<<endl;
        }
};

int Employee :: count = 1000; // This is a static variable used for a particular class "Employee", it is by default initialised with zero
                              // This is how you can change value of a static variable  

int main()
{
    Employee harry, rohan;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    // cout<<"Number of employee are"<<count<<endl;
    return 0;
}
