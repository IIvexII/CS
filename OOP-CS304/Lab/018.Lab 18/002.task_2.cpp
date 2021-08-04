/*
  Q.2 Write a class Person that has attributes of id, name and address. It has a constructor
  to initialize, a member function to input and a member function to display data members. 
  Create another class Student that inherits Person class. It has additional attributes of
  rollnumber and marks. Override the member function of parent class in child class (input
  and display).
*/
#include <iostream>
using namespace std;

class Person{
  protected:
    int id;
    string name;
    string address;
  public:
    // Constructors
    Person(): id(0), name(""), address("") { }
    Person(int i, string n, string a): id(i), name(n), address(a) { }

    // Input
    void input(){
      cout << "==============================" << endl;
      cout << "             Input            " << endl;
      cout << "==============================" << endl;
      cout << "Enter ID: "; cin >> id;
      cin.clear();
      cin.ignore(123,'\n');
      cout << "Enter Name: "; cin >> name;
      cin.clear();
      cin.ignore(123,'\n');
      cout << "Enter Address: "; getline(cin, address);
      cin.clear();
      cin.ignore(123,'\n');
    }
    // Display
    void display(){
      cout << "==============================" << endl;
      cout << "            Display           " << endl;
      cout << "==============================" << endl;
      cout << "ID: " << id << endl;
      cout << "Name: " << name << endl;
      cout << "Address: " << address << endl;
    }
};
class Student: virtual public Person{
  private:
    int rollNumber;
    float marks;
  public:
    // Constructors
    Student(): rollNumber(0), marks(0) { }
    Student(int i, string n, string a, int r, float m): 
        Person(i,n,a), rollNumber(r), marks(m) { }

    // Input
    void input(){
      Person::input();
      cout << "Enter Roll Number: "; cin >> rollNumber;
      cin.clear();
      cin.ignore(123,'\n');
      cout << "Enter Marks: "; cin >> marks;
      cin.clear();
      cin.ignore(123,'\n');
    }
    // Display
    void display(){
      Person::display();
      cout << "Roll Number: " << rollNumber << endl;
      cout << "Marks: " << marks << endl;
    }
};
int main(){
  // Demonstration of function overriding
  Student s1;

  // functions of Student class will be called.
  s1.input();
  s1.display();
  return 0;
}