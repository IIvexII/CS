/*
    Date: 21-12-2020
    Purpose: Write a program that  displays the degree-to-radian table using while loop.
    Author: Zafeer
*/
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int degree=0,
        radian=0;

    cout << "Degree" << "\t\t" << "Radian" << endl;
    while(degree<=360){
        cout << degree << "\t\t" << degree*M_PI/180 << endl;
        degree+=10;
    }

    return 0;
}