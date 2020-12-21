/*
    Date: 21-12-2020
    Purpose: Write a program that inputs a number from the
             user and displays the factorial of that number using while loop. 
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){

    int fectorial=1,
        user_inp,
        iterator=1;

    cout << "Enter a number: ";
    cin >> user_inp;

    while(iterator<=user_inp){
        fectorial*=iterator;
        iterator++;
    }
    cout << "Factorial of " << user_inp << " is " << fectorial << endl;
    
    return 0;
}