/*
    Date: 5-1-2020
    Purpose: Write a program that display the following shape using
             nested loops. The outer loop should b for loop and inner
             loop should be while loop.
             * * * * * * *
             * * * * * *
             * * * * *
             * * * * 
             * * *
             * *
             *
*/

#include <iostream>
using namespace std;

int main(){
    int i,j=1;
    for(i=7;i>=1; i--){
        while(j<=i){
            cout << "* ";
            j++;
        }
        cout << endl;
        j=1;
    }
    return 0;
}