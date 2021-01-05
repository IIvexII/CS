/*
    Date: 5-1-2021
    Purpose: Write a program that display the following shape using nested for loop. 
                  *
                * *
              * * *
            * * * *
*/
#include <iostream>
using namespace std;

int main(){

    for(int i=1;i<=4;i++){
        for(int j=1; j<=4; j++){
            if(j>=5-i)
                cout << " *" ;

            else
                cout << "  ";
        }
        cout << endl;
    }    
    return 0;
}