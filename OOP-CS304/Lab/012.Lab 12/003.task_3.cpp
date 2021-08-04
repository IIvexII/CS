/*
    Q3). Create a class named “Student” (in header file as .h) with a 
    string variable “name” and an integer variable “roll_no”. Assign 
    the value of roll_no as “101” and that of name as "Ali" by creating
    an object of the class Student.
*/
#include "003.header.h"
using namespace std;

int main(){
    Student s1("Ali", 101);
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNo << endl;
    return 0;
}