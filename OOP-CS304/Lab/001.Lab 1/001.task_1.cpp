/*
    Task 1: Number is even or odd
*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num%2==0){
        cout << "This number is even." << endl;
    else
        cout << "This number is odd." << endl;
    }
    return 0;
}