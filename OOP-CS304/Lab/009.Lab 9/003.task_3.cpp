/*
    Q3). Create a C++ program in which we can calculate the total marks of each student of a class
in OOP, data structure and database and the average marks of the class. The number of students in
the class are entered by the user. Create a class named Marks with data members for roll number,
name and marks. Create three other classes inheriting the Marks class, OOP, data structure and
database, which are used to define marks in individual subject of each student.
*/
#include <iostream>
using namespace std;
class Marks{
    public:
        int rollNo,marks=-1;
        string name;
};
class OOP: public Marks{
    public:
        OOP(string stName,int stRoll, int stMarks): 
            name(stName), rollNo(stRoll), marks(stMarks){}
};
class DataStructure: public Marks{
    public:
        DataStructure(string stName,int stRoll, int stMarks): 
            name(stName), rollNo(stRoll), marks(stMarks){}
};
class Database: public Marks{
    public:
        Database(string stName,int stRoll, int stMarks): 
            name(stName), rollNo(stRoll), marks(stMarks){}
};
// Not Completed 
int main(){
    OOP oop;
    DataStructure ds;
    Database db;
    int numStudents;

    cout  << "Enter tudents: " << endl; cin >> numStudents;

    for(int i=0; i<numStudents; i++){
        cout << "Enter Name: " << 
    }
    return 0;
}