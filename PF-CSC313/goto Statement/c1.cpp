/*
    Date: 10-12-2020
    Purpose: Input numbers from user untill he enters 0
             and calculate average by using goto statement.
    Author: Muhammad Zafeer
    Roll Number: Fall-2020-BSCS-022
*/
#include <iostream>
using namespace std;

int main(){

    // Variables used in this program
    int num,
        sum=0;
    float avg=0,
          count=0;
    
    // This label where goto statement will jump
    input_lable:
    // Input from User
    cout << "Enter Number(0 to exit)>> ";
    cin >> num;
    
    // Add num to sum variable if num is not equal to zero
    if(num){
        sum += num;
        // This will count how many numbers, user entered.
        count++;
    }

    if(num){
        /* Goto the lable if user input is not zero
           This will work like a while loop*/
        goto input_lable;
    }
    else{
        // Calculate average of the numbers, user entered.
        avg = sum/count;
        cout << "Average Numbers: " << avg << endl;
    }
    return 0;
}