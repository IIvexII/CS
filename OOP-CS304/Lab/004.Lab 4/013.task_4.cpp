/*
Q4. Write a structure to store the names, salary and hours of work per day of 10 employees
in a company. Write a program to increase the salary depending on the number of hours of
work per day as follows and then print the name of all the employees along with their final
salaries.
Hours of work per day 8 10 >=12
Increase in salary 1k 2k 3k
*/
#include <iostream>
using namespace std;

struct Employee{
    string name;
    // Base salary is 90k
    float salary=90000;
    int work_hours;
};
int main(){
    Employee emp[10];
    for(int i=0;i<10; i++){
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Working hours: ";
        cin >> emp[i].work_hours;
        if(emp[i].work_hours>=12){
            emp[i].salary += 3000;
        }
        else if(emp[i].work_hours>=10){
            emp[i].salary += 2000;
        }
        else if(emp[i].work_hours>=8){
            emp[i].salary += 1000;
        }
        cout << "Salary: " << emp[i].salary << endl;
    }

    return 0;
}