#include <iostream>
using namespace std;

class employee
{
    public:
        int salaryOfEmployee, hourOfWorkPerDay;
        void getinfo(int salary, int workhourPerday);
        void addSalary();
        void displaySalary();
};

void employee :: getinfo(int salary, int workhourPerday){
    salaryOfEmployee = salary;
    hourOfWorkPerDay = workhourPerday;
}

void employee :: addSalary(){
    if (salaryOfEmployee < 500 )
    {
        salaryOfEmployee = salaryOfEmployee +10;
    }    
}

void employee :: displaySalary(){
    cout<<salaryOfEmployee<<endl;
}

int main()
{
    employee harry;
    harry.getinfo(400, 8);
    cout<<harry.salaryOfEmployee<<endl;;
    harry.addSalary();
    harry.displaySalary();
    return 0;
}
