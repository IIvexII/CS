/*
    Q3). Write a C++ program to create student class that contains attributes of the student
    name, roll no, and total-marks. Write two functions to get and display these attributes.
    Create a pointer object of student class and invoke the get and display function using this
    pointer object.
*/
#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollNum;
        int totalMarks;
    public:
        void input(){
            cout << "Name: "; cin >> name;
            cout << "Roll Number: "; cin >> rollNum;
            cout << "Total Marks: "; cin >> totalMarks; 
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNum << endl;
            cout << "Total Marks: " << totalMarks << endl; 
        
        }
};
int main(){
    Student* stPtr = new Student();
    stPtr->input();
    stPtr->display();

    delete stPtr;
    return 0;
}