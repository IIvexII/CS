/*
    Date: 16-12-2020
    Purpose: Take input from user and display them using array.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        cout << "Enter Number: ";
        cin >> arr[i];
    }
    cout << "Numbers you entered are: {";

    for(int i=0; i<5; i++){
        cout << arr[i] ;
        if (i<4){
            cout << ", ";
        }
    }

    cout << "}" << endl;

    return 0;
}