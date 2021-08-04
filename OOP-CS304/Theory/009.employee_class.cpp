/*
    Task: create a class employee  (empno, name, salary),
          write  down constructors, print and getdata methods.
*/
#include <iostream>
using namespace std;

class Employee{
    private:
        int empId,empSalary;
        string empName;
        static int count;
    public:
        // Constructor
        Employee(){
            empId = 0;
            empName = "";
            empSalary = 0;
            count++;
        }
        Employee(int num,string name, int salary):
            empId(num), empName(name), empSalary(salary) {count++; }
        // Get Data Methods
        int getId(){
            return empId;
        }
        string getName(){
            return empName;
        }
        int getSalary(){
            return empSalary;
        }
        void printInfo(){
            cout << "***** Employee Data "<< count << " *****" << endl;
            cout << "ID: " << getId() << endl;
            cout << "Name: " << getName() << endl;
            cout << "Salary: " << getSalary() << endl;
            cout << "*************************" <<endl << endl;
        }
};

int Employee::count=0;

int main(){
    Employee e1(1,"Zoya",100);
    e1.printInfo();
    Employee e2(2,"Zurgam", 500);
    e2.printInfo();
    return 0;
}