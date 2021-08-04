/*
    Q2). Write a class Person that has attributes of id, name and address. It has a constructor to
    initialize, a member function to input and a member function to display data members. Create
    another protected class Student that inherits Person class. It has additional attributes of rollnumber
    and marks. It also has member function to input and display its data members.
*/
#include <iostream>
using namespace std;

class Person{
    private:
        int id;
        string name;
        string address;
    public:
        Person(): id(0), name(""), address("") { }

        void input(){
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Address: "; cin >> address;
        }
        void output(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
        }
};
class Student: protected Person{
    private:
        int rollNumber;
        int marks;
    public:
        void input(){
            Person::input();
            cout << "Enter Roll No.: "; cin >> rollNumber;
            cout << "Enter Marks: "; cin >> marks;
        }
        void output(){
            Person::output();
            cout << "Roll No.: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Student s1;
    // Input Data
    cout << "##### INPUT #####" << endl;
    s1.input();

    // Output Data
    cout << "##### OUTPUT #####" << endl;;
    s1.output();

    return 0;
}