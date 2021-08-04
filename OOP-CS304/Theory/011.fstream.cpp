#include <fstream>
#include <iostream>
using namespace std;

class Student{
    public:
        void input();
        void output();
    private:
        string name;
        int age;
};
int main(){
    // Creating Object
    Student s1;
    s1.input();

    // Output s1 object data to a file
    ofstream os("data.bin", ios::binary);
    os.write(reinterpret_cast<char*>(&s1),sizeof(Student));

    // Closing output stream
    os.close();

    // Creating a second objecy
    Student s2;

    // Input file data in s2 object
    ifstream is("data.bin", ios::binary);
    is.read(reinterpret_cast<char*>(&s2), sizeof(Student));

    s2.output();
    
    // Closing input stream
    is.close();

    return 0;
}
void Student::input(){
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Age: "; cin >> age;
}
void Student::output(){
    cout << "Enter Name: " << name << endl;
    cout << "Enter Age: " << age << endl;
}