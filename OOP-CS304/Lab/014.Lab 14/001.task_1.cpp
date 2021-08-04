/*
    Q1. Write a C++ program to show the concept of Aggregation
        (with appropriate constructors and destructors ).
*/
#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
};

class Teacher: public Person{
    private:
        string subj;
    public:
        Teacher(string n, int a, string s): Person(n,a,s) { }
};


int main(){
 
    return 0;
}
