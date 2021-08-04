/*
    Q2. Write a program to print the roll number and average marks of 8 students in three
    subjects (each out of 100). The marks are entered by the user and the roll numbers are
    automatically assigned. (using pointer type array).
*/
#include <iostream>
using namespace std;

int main(){
    // Creating Arrays with dynamic memory allocation
    int *subMarks = new int[3];
    int *rollNums = new int[8];
    float *avgMarks = new float[8];

    // Geting Data of 8 students
    for(int studentNum=1;studentNum<=8; studentNum++){
        // This variable is like a temporary
        // vaiable which will store average value.
        float average=0.0f;

        cout << "Student: " << studentNum << endl;
        
        // Get Marks from users.
        for(int marks=1; marks<=3; marks++){
            cout << "Marks " << marks << ": "; cin >> *(subMarks + marks - 1);
        }

        // Calculate Average
        for(int i=0; i<3; i++){
            average += *(subMarks + i);
        }
        *(avgMarks + studentNum-1)=average/3;

        // Roll Number: Student Number + CONSTANT VALUE + Average marks of that student
        *(rollNums+studentNum-1) = studentNum+678643+*(avgMarks + studentNum-1);
    }

    // Display Average
    for(int i=0; i<8; i++){
        cout <<"###################"<<endl;
        cout << "Student: " << i+1 << endl;
        cout <<"###################"<<endl;

        cout << "Average: " << *(avgMarks+i) << endl;
        cout << "Roll Number: " << *(rollNums+i) << endl;
    }
    
    // Deallocating memory
    delete[] subMarks;
    delete[] rollNums;
    delete[] avgMarks;
    return 0;
}