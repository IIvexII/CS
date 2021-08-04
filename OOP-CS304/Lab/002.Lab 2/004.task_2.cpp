/*
    Grading Program
*/
#include <iostream>
using namespace std;

string grading(float marks)
{
    string grade;
    if(marks<=100 && marks>=91){
         grade = "A";   
    }
    else if(marks<=90 && marks>=81){
         grade = "AB";   
    }
    else if(marks<=80 && marks>=71){
         grade = "BB";   
    }
    else if(marks<=70 && marks>=61){
         grade = "BC";   
    }
    else if(marks<=60 && marks>=51){
         grade = "CD";   
    }
    else if(marks<=50 && marks>=41){
         grade = "DD";   
    }
    else if(marks<=40){
        grade="Fail";
    }
    return grade;
}
int main(){
    int marks;
    cout << "Enter Makrs: ";
    cin >> marks;
    cout << "Grade is " << grading(marks) << endl;

    return 0;
}