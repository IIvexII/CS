/*
    Date: 6-1-2021
    Purpose: Write a program to display up triangle.
              *
             * *
            *   *
           *     *
          * * * * *
*/
#include <iostream>
using namespace std;

int main(){
    int space=1;
    for(int i=1; i<=5; i++){
        if(i!=5){
            for(int j=1; j<=9; j++){
                if(j==6-i || j==4+i){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        else{
            for(int k=1;k<=9; k++){
                cout << ((space)? "*":" ");
                space=(space)?0:1;
            }
        }
        cout << endl;
    }
    return 0;
}