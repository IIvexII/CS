/*
    Date: 10-12-2020
    Purpose: Print table of the entered number to 10.
    Author: Muhammad Zafeer
    Roll Number: Fall-2020-BSCS-022
*/
#include <iostream>
using namespace std;

int main(){

    // Variables used in this program
    int num, counter=1;

    // Input from User
    cout << "Enter Number>> ";
    cin >> num;
    
    // Add num to sum variable if num is not equal to zero
    if(num){
        output_table:
            cout << num << " X " << counter << " = " << num * counter << endl;
            counter++;
        if(counter<=10)
            goto output_table;
    }
 
   return 0;
}