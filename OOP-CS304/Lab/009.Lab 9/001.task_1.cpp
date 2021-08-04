/*
    Q1). Write a class Employee that contains attributes of employee id and his salary. The class
contains member functions to input and show the attribute. Write a child class Manager that
inherits from Employee class. The child class has attributes of manager id and his department. It
also contains the member functions to input and show its attribute.
*/
#include <iostream>
using namespace std;

class Employee{
    public:
        int empId, empSalary;

        void input(){
            cout << "Enter Employee ID: "; cin >> empId;
            cout << "Enter Employee Salary: "; cin >> empSalary;
        }
        void show(){
            cout << "Employee ID: " << empId << endl;
            cout << "Employee Salary: " << empSalary << endl;
        }
};
class Manager: public Employee{
    public:
        int managerId;
        void input(){
            cout << "Enter Manager ID: "; cin >> managerId;
            cout << "Enter Manager Salary: "; cin >> empSalary;
        }
        void show(){
            cout << "Manager ID: " << managerId << endl;
            cout << "Manager Salary: " << empSalary << endl;
        }
};

int main(){
    Manager m1;
    Employee::m1.input();
    Employee::m1.show();
    
    Manager::m1.input();
    Manager::m1.show();
    return 0;
}