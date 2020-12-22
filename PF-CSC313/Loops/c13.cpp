/*
    Date: 22-12-2020
    Purpose: Write  a program that inputs a positive number.
             It then displays the sum of all odd numbers and
             the sum of all even numbers from 1 to the number
             entered by the user.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int user_inp,
        number=1,
        even_sum=0,
        odd_sum=0;
    
    cout << "Enter Positive Number: ";
    cin >> user_inp;

    while(number<=user_inp){
        if(number%2==0)
            even_sum+=number;
        else
            odd_sum+=number;
        number++;
    }

    cout << "Even Number Sum: " << even_sum << endl;
    cout << "Odd Number Sum: " << odd_sum << endl;

    return 0;
}