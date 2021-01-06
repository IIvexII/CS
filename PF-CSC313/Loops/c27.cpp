/*
    Date: 6-1-2021
    Purpose: Write a program to display the shape.
              *
             * *
            *   *
           *     *
            *   *
             * *
              *

*/
#include <iostream>
using namespace std;

int main(){

    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i<=4)
                if(j==5-i || j==3+i){
                    cout << "*";
                }
                else
                    cout << " ";
            else    
                if(j==i-3 || j==11-i ){
                    cout << "*";
                }
                else
                    cout << " ";


        }
    cout << endl;
    }
    return 0;
}