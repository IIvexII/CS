/*
    Date: 30-12-2020
    Purpose: write a program that print the following series
             1 -4 7 -- -40 
*/
#include <iostream>
using namespace std;

int main(){
    int j=1;
    for(int i=1; i<=40; i+=3){
        if(j){
            cout << i << endl;
            j=0;
        }
        else{
            cout << "-" << i << endl;
            j=1;
        }
    }
    return 0;
}