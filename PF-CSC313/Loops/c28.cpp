/*
    Date: 6-1-2021
    Purpose: Write a program to display right angle triangle.
             *
             * *
             *   *
             *     *
             *       *
             *         *
             *           *
             * * * * * * * *
*/
#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=6;i++){
        for(int j=1; j<=6; j++){
            if(i==6)
                cout << "* ";
            else 
                if(j==7-i || j==6)
                    cout << "* ";
                else
                    cout << "  ";
        }
        cout << endl;
    }

    return 0;
}