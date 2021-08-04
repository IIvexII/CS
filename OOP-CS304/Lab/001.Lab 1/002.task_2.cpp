/*
    Task 1: Number is even or odd
*/
#include <iostream>
using namespace std;

int main(){
    float distance,fees;

    cout << "Enter Distance: ";
    cin >> distance;

    if(distance <= 20){
        fees = distance*0.65;
    }
    else if(distance <= 40){
        fees = distance*0.75;
    }
    else if(distance <= 60){
        fees = distance*0.78;
    }
    else if(distance <= 80){
        fees = distance*0.80;
    }
    else if(distance <= 100){
        fees = distance*0.95;
    }
    else if(distance > 100){
        fees = distance*1.05;
    }

    cout << "Fees: " << fees << endl;

    return 0;
}