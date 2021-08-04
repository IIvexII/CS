/*
    Q1. Write a function which will take pointer and display the number on screen. Take number
    from user and print it on screen using that function.
*/
#include <iostream>
using namespace std;

void display(int *ptr){
    cout << "You Entered: " << *ptr << endl;
}
int main(){
    int inpNum;
    int *ptr;

    ptr = &inpNum;

    cout << "Enter a number: "; cin >> inpNum;

    display(ptr);
    return 0;
}