/*
    Q.3. Create a class named “Student” with a string variable “name”
    and an integer variable “roll_no”. Assign the value of roll_no as
    “101” and that of name as "Ali" by creating an object of the class Student.
*/
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollNo;
};
int main(){
    Student s1 = {"Ali", 101};
    cout << s1.name << endl;
    cout << s1.rollNo << endl;
    return 0;
}