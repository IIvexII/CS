/*
Q1). Write a program to print the names of employee by creating an Employee class. If no name
is passed while creating an object of the Employee class, then the name should be "Unknown",
otherwise the name should be equal to the String value passed while creating the object of the
Employee class.
*/
#include <iostream>
using namespace std;
class Employee{
    private:
        string name;
    public:
        Employee(){
            name="Unknown";
        }
        Employee(string name){
            Employee::name=name;
        }
        void printName(){
            cout << "Employee Name: " << name << endl;
        }
};
int main(){
    Employee em1, em2("Bunti");
    em1.printName();
    em2.printName();
}