/*
    Q1). Write a C++ program to create student class that contains attributes of the student 
         name, roll no, and total-marks. Write two functions to get and display these attributes. 
*/
#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollNum;
        float totalMarks;
    void getData(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNum;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }
    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNum << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};
int main(){
    Student s1;
    s1.getData();
    s1.printInfo();
}