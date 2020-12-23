/*
    Date: 23-12-2020
    Purpose: Write a program that inputs a number and checks whether
             if is a palindrome or not. A palindrome is a number that
             reads the same backwards as forwards such as 65526 and 4994.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int user_inp=0,
        number=0,
        rev_num=0,
        digit;

    cout << "Enter Numbe: ";
    cin >> user_inp;

    number = user_inp;

    while(number!=0){
        digit = number%10;
        rev_num = (rev_num*10)+digit;
        number/=10;
    }

    if(rev_num==user_inp)
        cout << user_inp << " is palindrome." << endl;
    else
        cout << user_inp << " is not palindrome." << endl;

    return 0;
}