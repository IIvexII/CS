/*
    Date: 21-12-2020
    Purpose: Write a program that inputs an integer and displays the sum of its digits.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int user_inp,
        digits,
        sum=0;

    cout << "Enter an integer: ";
    cin >> user_inp;

    // Storing user input in digit variable for further processing.
    digits = user_inp;

    while(digits%10!=0){
        sum+=digits%10;   // This will add the last number of user_inp in sum variable
        digits/=10;       // This will assign the remaining digits to user_inp. 
    }

    cout << "The sum of digits of " << user_inp << " = "<< sum << endl;

    return 0;
}