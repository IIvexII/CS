#include <iostream>
using namespace std;

struct Employee{
    int code;
    int year;
    string name;
};

int main(){
    Employee emp_arr[3];
    int year_inp;
    for(int index=0; index<3; index++){
        cout << "### EMPLOYEE " << index+1 << " ###" << endl;
        cout << "ID: ";
        cin >> emp_arr[index].code;
        cout << "Enter Name: ";
        cin >> emp_arr[index].name;
        cout << "Joing Year: ";~
        cin >> emp_arr[index].year;
    }
    cout << "#############################"
    cout << "Enter Year: "; 
    cin >> year_inp;
    for(int i=0; i<3; i++){
        if((year_inp - emp_arr[i].year)>=3){
            cout << "ID: " << emp_arr[i].code << endl;
            cout << "Name: " << emp_arr[i].name << endl;
            cout << "Year of Joining: " << emp_arr[i].year << endl;
        }
    }
    return 0;
}