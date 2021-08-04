/*
  Q2. Write a class Person that has attributes of id, name and address (declare as private).
  It has a constructor to initialize, a member function to input and a member function to
  display data members. Declare class Student as friend of person class. It has additional 
  attributes of rollNumber and marks. It also has member function to input and display its
  data members (demonstrate the working of friend class student).
*/
#include <iostream>
using namespace std;

class Student;

class Person{
  private:
    int id;
    string name;
    string address;

    friend class Student;

    Person(): id(0), name(""), address("") { }
    void input();
    void output();
};
class Student{
  private:
    int rollNumber;
    int marks;
    Person p;
  public:
    Student(): rollNumber(0), marks(0) { }

    void input();
    void output();
};

int main(){
  Student s;
  s.input();
  s.output();
  return 0;
}
// Person Class
void Person::input(){
  cout << "ID: "; cin >> id;
  cout << "Name: "; cin >> name;
  cout << "Address: "; cin >> address;
}
void Person::output(){
  cout << "ID: " << id << endl;
  cout << "Name: " << name << endl;
  cout << "Address: " << address << endl;

}
// Student Class
void Student::input(){
  p.input();
  cout << "Roll Number: "; cin >> rollNumber;
  cout << "Marks: "; cin >> marks;
}
void Student::output(){
  p.output();
  cout << "Roll Number: " << rollNumber << endl;
  cout << "Marks: " << marks << endl;
}