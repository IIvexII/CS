// write down a program that reads two objects and swaps them using  pointers.
#include <iostream>
using namespace std;

class Student{
    public:
        string name;

        Student(){}
        Student(string n) : name(n) {}
};

int main(){
    Student s1("Zafeer"), s2("Hafeez"), sTmp;

    Student *ptr1 = new Student;
    Student *ptr2 = new Student;

    ptr1 = &s1;
    ptr2 = &s2;

    cout << "Before Swapping" << endl;
    cout << ptr1->name << endl;
    cout << ptr2->name << endl;

    // Swapping
    sTmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = sTmp;
    
    cout << "After Swapping" << endl;
    cout << ptr1->name << endl;
    cout << ptr2->name << endl;

    return 0;
}