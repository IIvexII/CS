/*
Q1. Write a program with Student as abstract class and create derive classes Engineering, Medicine
and Science from base class Student. Create the objects of the derived classes and process them
and access them using array of pointer of type base class Student.
*/
#include <iostream>
using namespace std;

class Student{
  protected:
    string name;
    int rollNum;
  public:
    Student(): name(" "), rollNum(0) {}
    Student(string n, int r): name(n), rollNum(r) {}

    virtual void display() = 0;
    virtual void input() = 0;
};
class Engineering: public Student{
  protected:
    string degree;
  public:
    Engineering(): Student(), degree(" ") {}
    Engineering(string n, int r, string d): Student(n, r), degree(d) {}

    void display(){
      cout << "---------------------------" << endl;
      cout << "        Engineering        " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: " << name << endl;
      cout << "Roll Number: " << rollNum << endl;
      cout << "Degree: " << degree << endl;
    }
    void input(){
      cout << "---------------------------" << endl;
      cout << "        Engineering        " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: "; cin >> name;
      cout << "Roll Number: "; cin >> rollNum;
      cout << "Degree: "; cin >> degree;
    }
};
class Medicine: public Student{
  protected:
    string degree;
  public:
    Medicine(): Student(), degree(" ") {}
    Medicine(string n, int r, string d): Student(n, r), degree(d) {}

    void display(){
      cout << "---------------------------" << endl;
      cout << "         Medicine          " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: " << name << endl;
      cout << "Roll Number: " << rollNum << endl;
      cout << "Degree: " << degree << endl;
    }
    void input(){
      cout << "---------------------------" << endl;
      cout << "         Medicine          " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: "; cin >> name;
      cout << "Roll Number: "; cin >> rollNum;
      cout << "Degree: "; cin >> degree;
    }
};
class Science: public Student{
  protected:
    string degree;
  public:
    Science(): Student(), degree(" ") {}
    Science(string n, int r, string d): Student(n, r), degree(d) {}

    void display(){
      cout << "---------------------------" << endl;
      cout << "         Science           " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: " << name << endl;
      cout << "Roll Number: " << rollNum << endl;
      cout << "Degree: " << degree << endl;
    }
    void input(){
      cout << "---------------------------" << endl;
      cout << "         Science            " << endl;
      cout << "---------------------------" << endl;
      cout << "Name: "; cin >> name;
      cout << "Roll Number: "; cin >> rollNum;
      cout << "Degree: "; cin >> degree;
    }
};
int main(){
  Engineering e1;
  Medicine m1;
  Science s1;

  Student* stdArr[3] = {&e1, &m1, &s1};

  for(int i=0; i<3; i++)
    stdArr[i]->input();

  for(int i=0; i<3; i++)
    stdArr[i]->display();
  return 0;
}