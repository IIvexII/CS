/*
    Date: 16-12-2020
    Purpose: Write a program to calculate sum of counting(1-5).
    Author: Zafeer
*/

#include <iostream>

using namespace std;

int main(){

    int n=1, sum=0;

    while(n<=5){
        sum += n;
        n++; 
    }
    cout << "Sum = " << sum << endl;
    return 0;
}