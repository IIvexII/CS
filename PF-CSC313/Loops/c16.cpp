/*
    Date: 23-12-2020
    Purpose: Write a program that reads the current state of a telephone line.
             The user should enter 'w' for working state and 'd' for dead state.
             Any other input should be invalid. Use do-while loop to force the user
             to enter a valid input value. 
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    char tele_state,
         not_correct_inp;

    do{
        cout << "State of your telephone: ";
        cin >> tele_state;
        if(tele_state=='d' || tele_state=='D'){
            cout << "Forwarding you complaint to the technician." << endl;
            not_correct_inp=0;
        }
        else if(tele_state=='w' || tele_state=='W'){
            cout << "Nice to hear that! We are working to make our service best." << endl;
            not_correct_inp=0;
        }
        else{
            cout << "Please Enter a valid state (w -> working or d -> dead)." << endl;
            not_correct_inp=1;
        }
    }while(not_correct_inp);
    return 0;
}