/*
Q1). Write a program having a base class Student with data members rollno, name and Class
define a member functions getdata() to input values and another function putdata() to display all
values. A class Test is derived from class Student with data members T1marks, T2marks, T3marks,
Sessional1, Sessional2, Assignment and Final. Also make a function getmarks() to enter marks for
all variables except Final and also make a function putmarks() to display result. Make a function
Finalresult() to calculate value for final variable using other marks. Then display the student result
along with student data.
*/
#include <iostream>
using namespace std;

class Student{
    public:
        void getData();
        void putData();
    protected:
        string name;
        int rollNo;
};
class Test: public Student {
    public:
        void getMarks();
        void putMarks();
        void finalResult();
    protected:
    int t1Marks, t2Marks, t3Marks,
        sessional1, sessional2, 
        assignment, finalMarks;
};
int main(){
    Test t1;

    t1.getData();
    t1.getMarks();
    t1.finalResult();

    return 0;
}
// ###################################################
//                STUDENT CLASS MATHODS
// ###################################################
void Student::getData(){
    cout << "######### INPUT STUDNET INFORMATION #########" << endl;
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Roll No.: "; cin >> rollNo;
}
void Student::putData(){
    cout << "######### OUTPUT STUDNET INFORMATION #########" << endl;
    cout <<"Name: " << name << endl;
    cout << "Roll No.: " << rollNo << endl;
}
// ###################################################
//                  TEST CLASS MATHODS
// ###################################################
void Test::getMarks(){
    cout << "######### GETTING MARKS #########" << endl;
    cout << "Enter test 1 marks: "; cin >> t1Marks;
    cout << "Enter test 2 marks: "; cin >> t2Marks;
    cout << "Enter sessional 1 marks: "; cin >> sessional1;
    cout << "Enter sessional 2 marks: "; cin >> sessional2;
    cout << "Enter assignment marks: "; cin >> assignment;
}
void Test::putMarks(){
    cout << "######### PRINTING MARKS #########" << endl;
    cout << "Test 1: " << t1Marks << endl;
    cout << "Test 2: " << t2Marks << endl;
    cout << "Sessional 1: " << sessional1 << endl;
    cout << "Sessional 2: " << sessional2 << endl;
    cout << "Assignment: " << assignment << endl;
}
void Test::finalResult(){
    // Calculating final marks
    finalMarks = t1Marks + t2Marks + sessional1 + sessional2 + assignment;

    Student::putData();
    Test::putMarks();
    cout << "Final Marks: " << finalMarks << endl;
}