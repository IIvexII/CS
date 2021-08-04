/*
Q1. Write a structure to store the roll no, name and age (between 10 to 15 ) 
of students (more than 5). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having 
    even roll no.
3 - Write another function to display the details of the student whose 
    roll no is given
(i.e. roll no. entered by the user).
*/
#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int roll_no;
};

void age_14(Student st[],int size);
void even_roll(Student st[], int size);
void search(Student st[], int size, int search_rn);

int main(){
    Student st[6];
    // Data
    st[0] = {"Zafeer",14,50};
    st[1] = {"Abdullah",11,51};
    st[2] = {"Kainat",14,52};
    st[3] = {"Armghan",14,54};
    st[4] = {"Ahsan",12,58};
    st[5] = {"Mahad",10,65};

    // Function Calls
    age_14(st,6);
    even_roll(st,6);
    search(st,6,54);

    return 0;
}
// Function Definition
void age_14(Student st[],int size){
    cout << "Age 14" << endl;
    for(int index=0; index<size; index++){
            if(st[index].age==14)
                cout << st[index].name << endl;
    }
}
void even_roll(Student st[], int size){
    cout << "Even Roll Number" << endl;
    for(int index=0; index<size; index++){
        if(st[index].age%2==0)
            cout << st[index].name << endl;
    }
}
void search(Student st[], int size, int search_rn){
    cout << "Search Student using roll number." << endl;
    for(int index=0; index<size; index++){
        if(st[index].roll_no==search_rn){
            cout << "Name: " << st[index].name << endl;
            cout << "Roll No.: " << st[index].roll_no << endl;
            cout << "Age: " << st[index].age << endl;
        }
    }
}