/*
    Date: 17-12-2020
    Purpose: Take size and elements of an arry from user and
             Sum of all elements in that array.
    Author: Zafeer
*/
#include <iostream>
using namespace std;

int main(){
    // Variables
    int arr_size,sum=0;

    cout << "Enter Size: ";
    cin >> arr_size;
    
    // Arary according to the need of user.
    int A[arr_size]={};

    // Take input from user according to
    // the size of array he/she entered.
    for(int i=0; i<arr_size; i++){
        cout << "Value " << i+1 << ": ";
        cin >> A[i];
    }


    // Sum the elements of A(array)
    for(int x:A)
        sum+=x;

    // Print out the sum.
    cout << "Sum: " << sum << endl;

    return 0;
}