/*
    Date: 6-1-2021
    Purpose: Write a program to display this:
            *******
             *   *
              * *
               *
*/

#include <iostream>
using namespace std;

int main(){
    int space=0;
    for(int i=1;i<=4;i++){
        if(i==1){
            for(int j=1;j<=7; j++){
                if(space){
                    cout << " ";
                    space--;
                }
                else{
                    cout << "*";
                    space++;
                }

                
            }
        }
        else{
            for(int j=1;j<=7;j++){
                if(j==i||j==8-i){
                    cout << "*";
                    
                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}