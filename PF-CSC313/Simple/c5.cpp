/*
    Mixture
*/
#include <iostream>
using namespace std;

// Prototype
int validator();

// Global Variable
int age=18;

int main(){

    if(validator())
        cout << "Come inside, you are mature." << endl;
    else
        cout << "Grow up and come back when you are 18 or above." << endl;
    
    return 0;
}

// validator function.
int validator(){
    int age;
    
    // Ask age from user. 
    cout << "Enter your age: ";
    cin >> age;

    if (age<::age)
        return 0;        
    else
        return 1;
}