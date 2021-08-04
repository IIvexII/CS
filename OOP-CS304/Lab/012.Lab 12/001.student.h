#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollno,marks;
    public:
        void set(string n,int r, int m){
            name=n;
            rollno=r;
            marks=m;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll No.: " << rollno << endl;
            cout << "Marks: " << marks << endl;
        }
};